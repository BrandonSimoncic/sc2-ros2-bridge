FROM docker.io/osrf/ros:humble-desktop

ARG USERNAME=ros
ARG USER_UID=1000
ARG USER_GID=${USER_UID}

# Install dev tools and common ROS2 build dependencies
RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    cmake \
    git \
    curl \
    wget \
    python3-colcon-common-extensions \
    python3-colcon-mixin \
    python3-rosdep \
    python3-vcstool \
    python3-pip \
    ros-humble-ament-cmake \
    ros-humble-ament-cmake-python \
    ros-humble-launch-ros \
    ros-humble-rosidl-default-generators \
    ros-humble-rosidl-default-runtime \
    ros-humble-tf2-ros \
    ros-humble-visualization-msgs \
    ros-dev-tools \
    && rm -rf /var/lib/apt/lists/*

COPY requirements.txt /tmp/sc2_bridge_requirements.txt
RUN python3 -m pip install --no-cache-dir -r /tmp/sc2_bridge_requirements.txt \
    && rm /tmp/sc2_bridge_requirements.txt

# Set up colcon mixins for faster builds
RUN colcon mixin add default \
    https://raw.githubusercontent.com/colcon/colcon-mixin-repository/master/index.yaml \
    && colcon mixin update default || true

# Create non-root user matching host UID/GID
RUN groupadd --gid ${USER_GID} ${USERNAME} \
    && useradd -s /bin/bash --uid ${USER_UID} --gid ${USER_GID} -m ${USERNAME} \
    && apt-get update && apt-get install -y sudo \
    && echo "${USERNAME} ALL=(root) NOPASSWD:ALL" > /etc/sudoers.d/${USERNAME} \
    && chmod 0440 /etc/sudoers.d/${USERNAME} \
    && rm -rf /var/lib/apt/lists/*

# Initialize rosdep
RUN rosdep update

USER ${USERNAME}
WORKDIR /home/${USERNAME}/ws

# Source ROS2 in every shell session
RUN echo "source /opt/ros/humble/setup.bash" >> ~/.bashrc \
    && echo "if [ -f /home/${USERNAME}/ws/ros2_ws/install/setup.bash ]; then source /home/${USERNAME}/ws/ros2_ws/install/setup.bash; fi" >> ~/.bashrc \
    && echo "source /usr/share/colcon_cd/function/colcon_cd.sh" >> ~/.bashrc \
    && echo "export _colcon_cd_root=/opt/ros/humble/" >> ~/.bashrc

ENTRYPOINT ["/bin/bash", "-c", "source /opt/ros/humble/setup.bash && exec \"$@\"", "--"]
CMD ["bash"]
