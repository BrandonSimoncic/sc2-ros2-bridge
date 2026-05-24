from setuptools import find_packages
from setuptools import setup

setup(
    name='sc2_bridge_interfaces',
    version='0.1.0',
    packages=find_packages(
        include=('sc2_bridge_interfaces', 'sc2_bridge_interfaces.*')),
)
