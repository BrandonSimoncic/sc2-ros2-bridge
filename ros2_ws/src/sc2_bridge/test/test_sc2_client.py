import threading
import time

from sc2_bridge.sc2_client import SerializedSc2Client


class FakePing:
    game_version = "fixture"
    base_build = 123
    data_version = "abc"


class FakeController:
    def __init__(self):
        self.active_calls = 0
        self.max_active_calls = 0
        self.calls = []

    def ping(self):
        self._record("ping")
        return FakePing()

    def step(self, count):
        self._record(f"step:{count}")
        return count

    def _record(self, name):
        self.active_calls += 1
        self.max_active_calls = max(self.max_active_calls, self.active_calls)
        time.sleep(0.01)
        self.calls.append(name)
        self.active_calls -= 1


def test_ping_info_is_normalized_from_controller_response():
    client = SerializedSc2Client("localhost", 8167, controller=FakeController())

    ping = client.ping()

    assert ping.game_version == "fixture"
    assert ping.base_build == 123
    assert ping.data_version == "abc"


def test_controller_calls_are_serialized():
    controller = FakeController()
    client = SerializedSc2Client("localhost", 8167, controller=controller)

    threads = [threading.Thread(target=client.step, args=(index,)) for index in range(8)]
    for thread in threads:
        thread.start()
    for thread in threads:
        thread.join()

    assert controller.max_active_calls == 1
    assert sorted(controller.calls) == [f"step:{index}" for index in range(8)]
