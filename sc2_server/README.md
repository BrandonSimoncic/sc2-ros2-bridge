# SC2 Server Image

This wrapper keeps the compose topology from the project spec while preserving the SC2
base image already chosen for this repo:

```text
docker.io/alkurbatov/sc2
```

The wrapper does not override the upstream entrypoint or command. It exposes port `8167`
for the SC2 API websocket and lets the bridge connect by the service hostname
`sc2-server` on the `sc2net` network.

Empirically, the image used during development reports SC2 `4.10.0.75689` and includes
maps under `/StarCraftII/maps`, including `Flat482Spawns.SC2Map`, `PersephoneAIE.SC2Map`,
`TorchesAIE.SC2Map`, `IncorporealAIE.SC2Map`, and `PylonAIE.SC2Map`.
