cmake_minimum_required(VERSION 3.13)
project(Leetcode)

set(CMAKE_CXX_STANDARD 14)

include_directories(Solutions/)

add_executable(main
        src/main.cpp
        )
