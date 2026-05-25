# syntax=docker/dockerfile:1
FROM nvidia/opengl:1.0-glvnd-runtime-ubuntu22.04

RUN apt update && apt install vim wget unzip -y

COPY --from=continuumio/miniconda3:4.12.0 /opt/conda /opt/conda

ENV PATH=/opt/conda/bin:$PATH

RUN conda install --yes python=3.7.16

RUN pip install pysc2==3.0.0

# https://github.com/google-deepmind/pysc2/issues/308
RUN pip uninstall -y pygame
RUN pip install pygame==1.9.6

WORKDIR /root/
RUN --mount=type=cache,id=sc2-zip,target=/var/cache/sc2 \
    if [ -f /var/cache/sc2/SC2.4.9.3.zip ]; then \
        echo "Found cached SC2.4.9.3.zip, skipping download" && \
        cp /var/cache/sc2/SC2.4.9.3.zip .; \
    else \
        echo "Downloading SC2.4.9.3.zip..." && \
        wget -q http://blzdistsc2-a.akamaihd.net/Linux/SC2.4.9.3.zip && \
        cp SC2.4.9.3.zip /var/cache/sc2/; \
    fi && \
    unzip -P iagreetotheeula SC2.4.9.3.zip && \
    rm -f SC2.4.9.3.zip && \
    mv SC2.4.9.3/StarCraftII/ StarCraftII/ && \
    rm -rf SC2.4.9.3/ && \
    chmod +x StarCraftII/Versions/Base75025/SC2_x64 && \
    ln -s /root/StarCraftII/Maps /root/StarCraftII/maps

EXPOSE 8167
