cmake_minimum_required(VERSION 3.15)
project(cpp-xp-farm LANGUAGES CXX)

# Force the C++ 20 standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Automatically grab all .cpp files in the root dir
file(GLOB SOURCES "*.cpp")

# Define final executable name and source files
add_executable(program ${SOURCES})

# Cleanly direct the compiled binary into your existing 
# build/ folder
set_target_properties(program PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "{CMAKE_BINARY_DIR}/../build"
)
