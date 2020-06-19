# CMake version to be used
cmake_minimum_required(VERSION 3.16)

# project name
project(LinkedList VERSION 1.0.0 LANGUAGES CXX)

# flags

# files

# include
include_directories( ./include ./src )

# target
add_executable(binary test/test.cpp)

# external libs

