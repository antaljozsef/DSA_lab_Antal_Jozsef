cmake_minimum_required(VERSION 3.17)
project(EgyDT C)

set(CMAKE_C_STANDARD 99)

add_executable(EgyDT main.c cmake-build-debug/Tomb_functions.c cmake-build-debug/Tomb_functions.h)