

# FluxLumina Example Project

## Overview
Welcome to the FluxLumina Example Project! This repository serves as a template to demonstrate the capabilities of [FluxLumina](https://github.com/diobat/FluxLumina), an OpenGL-based static library designed for high-performance graphics applications. 

## Getting Started

### Prerequisites
- openGL (Modern OSes already come with it)
- CMake (version 3.23 or higher)
- A C++ compiler

### Usage

```bash
# Clone the repository
git clone https://github.com/diobat/FluxLumina-template.git

# Go to the project directory
cd FluxLumina-template

# Create a build directory
mkdir build

# Configure the build
cmake -S . -B build

# Build target
cmake --build build --config Release

# Go into target folder
cd build/Release

# Run the target
./FL_Playground.exe
```

## Acknowledgments

Materials sourced from from https://ambientcg.com/ and https://freepbr.com/
