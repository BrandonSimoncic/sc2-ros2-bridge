from __future__ import annotations

import logging
import time
from dataclasses import dataclass
from threading import RLock
from typing import Any, Iterable, Optional, Sequence


class Sc2ClientError(RuntimeError):
    """Raised when the bridge cannot communicate with SC2."""


@dataclass(frozen=True)
class PingInfo:
    game_version: str = ""
    base_build: int = 0
    data_version: str = ""


class SerializedSc2Client:
    """Single in-flight-request wrapper around PySC2's RemoteController."""

    def __init__(
        self,
        host: str,
        port: int,
        timeout_seconds: float = 10.0,
        retry_timeout_seconds: float = 120.0,
        retry_initial_delay_seconds: float = 0.5,
        controller: Optional[Any] = None,
        logger: Optional[logging.Logger] = None,
    ) -> None:
        self.host = host
        self.port = int(port)
        self.timeout_seconds = float(timeout_seconds)
        self.retry_timeout_seconds = float(retry_timeout_seconds)
        self.retry_initial_delay_seconds = float(retry_initial_delay_seconds)
        self._controller = controller
        self._lock = RLock()
        self._logger = logger or logging.getLogger(__name__)
        self._ping_info = PingInfo()

    @property
    def connected(self) -> bool:
        return self._controller is not None

    @property
    def ping_info(self) -> PingInfo:
        return self._ping_info

    def connect(self) -> PingInfo:
        if self._controller is not None:
            return self.ping()

        try:
            from pysc2.lib import remote_controller
        except ImportError as exc:
            raise Sc2ClientError(
                "pysc2 is not installed; install the bridge container dependencies first"
            ) from exc

        self._ensure_absl_flags_parsed()

        deadline = time.monotonic() + self.retry_timeout_seconds
        delay = self.retry_initial_delay_seconds
        last_error: Optional[BaseException] = None

        while time.monotonic() <= deadline:
            try:
                with self._lock:
                    self._controller = remote_controller.RemoteController(
                        self.host,
                        self.port,
                        timeout_seconds=max(1, int(round(self.timeout_seconds))),
                    )
                    return self.ping()
            except Exception as exc:  # PySC2 raises protocol/socket-specific exceptions.
                last_error = exc
                self._controller = None
                self._logger.info(
                    "Waiting for SC2 API at %s:%s (%s)", self.host, self.port, exc
                )
                time.sleep(delay)
                delay = min(delay * 1.6, 5.0)

        raise Sc2ClientError(
            f"Timed out connecting to SC2 API at {self.host}:{self.port}"
        ) from last_error

    def _ensure_absl_flags_parsed(self) -> None:
        try:
            from absl import flags
        except ImportError:
            return

        if not flags.FLAGS.is_parsed():
            flags.FLAGS(["sc2_bridge"])

    def ping(self) -> PingInfo:
        response = self._call(("ping",))
        self._ping_info = PingInfo(
            game_version=str(getattr(response, "game_version", "")),
            base_build=int(getattr(response, "base_build", 0)),
            data_version=str(getattr(response, "data_version", "")),
        )
        return self._ping_info

    def create_game(self, request: Any) -> Any:
        return self._call(("create_game",), request)

    def join_game(self, request: Any) -> Any:
        return self._call(("join_game",), request)

    def game_info(self) -> Any:
        return self._call(("game_info",))

    def observe(self) -> Any:
        return self._call(("observe", "observation"))

    def step(self, count: int) -> Any:
        return self._call(("step",), int(count))

    def actions(self, request: Any) -> Any:
        return self._call(("actions", "act"), request)

    def debug(self, request: Any) -> Any:
        debug_commands = list(request.debug) if hasattr(request, "debug") else request
        return self._call(("debug",), debug_commands)

    def leave(self) -> Any:
        return self._call(("leave",))

    def close(self) -> None:
        if self._controller is None:
            return
        with self._lock:
            controller = self._controller
            self._controller = None
            method = getattr(controller, "close", None)
            if method is None:
                return
            try:
                method()
            except Exception:
                self._logger.debug("Ignoring SC2 controller close error", exc_info=True)

    def quit(self) -> None:
        self.close()

    def shutdown_server(self) -> None:
        if self._controller is None:
            return
        with self._lock:
            controller = self._controller
            self._controller = None
            method = getattr(controller, "quit", None)
            if method is None:
                return
            try:
                method()
            except Exception:
                self._logger.debug("Ignoring SC2 controller shutdown error", exc_info=True)

    def _call(self, method_names: Sequence[str], *args: Any) -> Any:
        if self._controller is None:
            raise Sc2ClientError("SC2 controller is not connected")

        with self._lock:
            method = self._resolve_method(method_names)
            return method(*args)

    def _resolve_method(self, method_names: Iterable[str]) -> Any:
        assert self._controller is not None
        for method_name in method_names:
            method = getattr(self._controller, method_name, None)
            if method is not None:
                return method
        names = ", ".join(method_names)
        raise Sc2ClientError(f"SC2 controller does not expose any of: {names}")
