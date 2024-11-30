#!/bin/bash

# Create and navigate to the build directory
mkdir -p build
cd build

# Run CMake to generate the build system
cmake ..

# Build the project
cmake --build .


# Navigate back to the project root (optional)
cd ..
