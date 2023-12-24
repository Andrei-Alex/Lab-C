#!/bin/bash

# Navigate to the project root directory
cd "$(dirname "$0")/.."

# Create a build directory if it doesn't exist
mkdir -p build && cd build

# Generate build system with CMake
cmake ..

# Build the project
cmake --build .

# Run the tests executable
./tests/tests

# Check if tests were successful
if [ $? -eq 0 ]; then
    echo "All tests passed!"
else
    echo "Some tests failed."
fi