cmake_minimum_required(VERSION 3.18) # Set the minimum version of CMake
project(libopenikev2 VERSION 1.4) # Set your project's name and version

set(CMAKE_CXX_STANDARD 11) # Replace with your desired C++ standard
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)

target_include_directories(openikev2 PRIVATE src)