cmake_minimum_required(VERSION 3.17)
project(Lista C)

set(CMAKE_C_STANDARD 99)

add_executable(Lista main.c cmake-build-debug/Function.c cmake-build-debug/Function.h)