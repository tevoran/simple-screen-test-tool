# simple-screen-test-tool

This is a simple tool for testing the pixels on a screen and is developed by Johannes Pfeiffer. It shows different colors, which helps the user to see different pixel and color errors on any given screen.

# installation

## compilation
Soon there will be the possibility to simply download the release version and use it straight away. But for now people have to compile the code. Make sure that SDL2 is installed, as it is used for the window and the color rendering. CMake is used for the compilation.

On Linux it is compiled by the following commands:

```
mkdir build
cd build
cmake ..
make
```

## package
There is a .deb package available as a download. Simply download it and install it. It will install SDL2 on its own as well. When it is installed, it is usable by using the

```
sstt
```
command.

## usage

SSTT uses the following keys for navigating between the different colors:

The forward keys are "space", "arrow right" and the "left mouse button", while the backward keys are "backspace", "arrow left" and the "right mouse button". "esc" is used for ending the program but it also ends after the last color.
