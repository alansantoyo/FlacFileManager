# FlacFileManager

A lightweight, terminal-based file manager and FLAC audio scanner written in C++. 
Designed to navigate local directory structures using low-level POSIX APIs and list audio files for playback.

## Features
* **POSIX Directory Traversal:** Uses `dirent.h` for direct interaction with the UNIX filesystem.
* **Interactive TUI:** Custom-built text menu with keyboard navigation (W/S to scroll).
* **Efficient Rendering:** Implements a sliding-window view to handle large file lists without cluttering the terminal.

## Prerequisites
* **C++ Compiler** (supporting C++17 or later)
* **CMake** (Version 3.12+)
* **Linux/macOS Environment** (Required due to `<dirent.h>` usage)

## Build Instructions
```bash
mkdir build
cd build
cmake ..
make
./scanner
