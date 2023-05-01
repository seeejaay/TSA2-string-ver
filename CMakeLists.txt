cmake_minimum_required(VERSION 3.25)
project(TSA2)

set(CMAKE_CXX_STANDARD 14)

include_directories(TSA2)

add_executable(TSA2
        TSA2/main.cpp
        TSA2/stringmanip.cpp
        TSA2/stringmanip.h)
