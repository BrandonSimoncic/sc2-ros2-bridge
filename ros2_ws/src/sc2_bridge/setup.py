from glob import glob
from setuptools import find_packages, setup

package_name = "sc2_bridge"

setup(
    name=package_name,
    version="0.1.0",
    packages=find_packages(exclude=["test"]),
    data_files=[
        ("share/ament_index/resource_index/packages", [f"resource/{package_name}"]),
        (f"share/{package_name}", ["package.xml"]),
        (f"share/{package_name}/config", glob("config/*.yaml")),
        (f"share/{package_name}/launch", glob("launch/*.launch.py")),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="bsimoncic",
    maintainer_email="bsimoncic@example.com",
    description="ROS2 bridge node for StarCraft II raw-interface unit control.",
    license="Apache-2.0",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "sc2_bridge_node = sc2_bridge.bridge_node:main",
            "swarm_demo = sc2_bridge.swarm_demo:main",
        ],
    },
)
