from setuptools import setup

package_name = 'srevices_exercise'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ghani',
    maintainer_email='ghani@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'spawn_client = srevices_exercise.spawn_client:main',
            'kill_client = srevices_exercise.kill_client:main',
        ],
    },
)
