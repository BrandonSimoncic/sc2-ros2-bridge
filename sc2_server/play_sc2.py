#!/usr/bin/env python3
"""Launch SC2 on port 8167, create a 2-participant game, join as Player 1,
display via pysc2's pygame renderer. Signals bridge via /tmp/sc2-signals so
it can connect and join as Player 2. Both share the same SC2 process on 8167
— no network multi-player ports needed."""
import os
import sys
import time

os.environ.setdefault('SC2PATH', '/root/StarCraftII/')
os.environ.setdefault('PROTOCOL_BUFFERS_PYTHON_IMPLEMENTATION', 'python')

SIGNAL_DIR = '/tmp/sc2-signals'
PLAYER2_TIMEOUT_SEC = int(os.environ.get('PLAYER2_TIMEOUT_SEC', '60'))

sys.argv = ['play_sc2']
from absl import flags
flags.FLAGS(sys.argv)

from pysc2 import maps, run_configs
from pysc2.env import sc2_env
from pysc2.lib import renderer_human
from s2clientprotocol import sc2api_pb2 as sc_pb

os.makedirs(SIGNAL_DIR, exist_ok=True)


def _clean_signals():
    for fname in ('game_created', 'player2_connected'):
        try:
            os.remove(os.path.join(SIGNAL_DIR, fname))
        except FileNotFoundError:
            pass


def _write_signal(name):
    open(os.path.join(SIGNAL_DIR, name), 'w').close()


def _wait_for_player2():
    """Block until the bridge signals it has connected to SC2, then return.

    Writing player2_connected happens *before* the bridge calls join_game, so
    by the time we call Player 1's join_game, SC2 already has two WebSocket
    connections and will wait for both join_game responses before starting."""
    p2_signal = os.path.join(SIGNAL_DIR, 'player2_connected')
    deadline = time.time() + PLAYER2_TIMEOUT_SEC
    print(f'Waiting up to {PLAYER2_TIMEOUT_SEC}s for Player 2 WebSocket ...', flush=True)
    while not os.path.exists(p2_signal):
        if time.time() > deadline:
            print('WARNING: Player 2 did not connect in time — starting game anyway.', flush=True)
            return
        time.sleep(0.5)
    try:
        os.remove(p2_signal)
    except FileNotFoundError:
        pass
    print('Player 2 WebSocket connected — both players now joining.', flush=True)


run_config = run_configs.get()
map_inst = maps.get('Simple64')

interface = sc_pb.InterfaceOptions()
interface.raw = True
interface.score = True
interface.render.resolution.x = 1024
interface.render.resolution.y = 768
interface.render.minimap_resolution.x = 128
interface.render.minimap_resolution.y = 128

_clean_signals()

with run_config.start(host='0.0.0.0', port=8167, want_rgb=True) as controller:
    print('SC2 running on 0.0.0.0:8167', flush=True)

    create = sc_pb.RequestCreateGame(realtime=True, disable_fog=False)
    create.local_map.map_path = map_inst.path
    create.local_map.map_data = map_inst.data(run_config)
    create.player_setup.add(type=sc_pb.Participant)
    create.player_setup.add(type=sc_pb.Participant)
    controller.create_game(create)

    _write_signal('game_created')
    print('Game created — signaling bridge to join as Player 2.', flush=True)

    # CRITICAL: wait for Player 2 WebSocket before Player 1 calls join_game.
    # SC2 decides single-player vs multi-player based on how many WebSocket
    # connections exist at the moment the first join_game is processed.
    _wait_for_player2()

    join = sc_pb.RequestJoinGame(options=interface, race=sc2_env.Race['random'])
    controller.join_game(join)
    print('Both players joined — starting renderer.', flush=True)

    renderer = renderer_human.RendererHuman(fps=22.4, step_mul=1, render_sync=False)
    renderer.run(run_config, controller, max_game_steps=0, save_replay=False)
