cmake_minimum_required(VERSION 3.14)
project(PIKA)

set(CMAKE_CXX_STANDARD 17)

add_executable(test1 main.cpp link.cpp link.h dxsl.cpp dxsl.h)