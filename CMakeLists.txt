cmake_minimum_required(VERSION 3.19)
project(example)

set(CMAKE_CXX_STANDARD 14)

add_executable(example main.cpp Triangle.cpp Triangle.h)