# Project README

## Overview
This project is a simple implementation of the classic card game "Dominion" using a graphical user interface. It supports basic gameplay features and runs on multiple platforms, including Linux, Windows, and WebAssembly.

## Features
- Basic Dominion game mechanics (e.g., phases, player turns, cards)
- Interaction via mouse clicks and keyboard inputs
- Rendering of the game state
- Support for different build environments

## Project Structure
### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools
- Libraries needed in specific projects:
  - Linux: X11, PNG, JPEG
  - Windows: WINAPI, User32, GDI32, Winmm
  - WebAssembly: Emscripten

## Build & Run
### Build Process
To build the project on a specific platform, navigate to the project directory and use the appropriate Makefile. The following commands are used for different platforms:

#### Linux:
```sh
make -f Makefile.linux all
```

#### Windows (MinGW-w64):
```sh
make -f Makefile.windows all
```

#### Wine Build (Linux cross compile for Windows):
```sh
make -f Makefile.wine all
```

#### WebAssembly (Emscripten):
```sh
make -f Makefile.web all
```

### Clean and Rebuild
To clean the build artifacts and rebuild, use:

- Linux:
  ```sh
  make -f Makefile.linux clean
  make -f Makefile.linux all
  ```

- Windows (MinGW-w64):
  ```sh
  make -f Makefile.windows clean
  make -f Makefile.windows all
  ```

- Wine Build (Linux cross compile for Windows):
  ```sh
  make -f Makefile.wine clean
  make -f Makefile.wine all
  ```

- WebAssembly (Emscripten):
  ```sh
  make -f Makefile.web clean
  make -f Makefile.web all
  ```

### Execute the Program
To execute the built program:

- Linux:
  ```sh
  make -f Makefile.linux exe
  ```

- Windows (MinGW-w64):
  ```sh
  make -f Makefile.windows exe
  ```

- Wine Build (Linux cross compile for Windows):
  ```sh
  make -f Makefile.wine exe
  ```

- WebAssembly (Emscripten):
  Open the `index.html` file in a web browser.