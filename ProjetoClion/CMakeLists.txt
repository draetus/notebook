cmake_minimum_required(VERSION 3.6)
project(ProjetoClion)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp functions.h functions.cpp)
add_executable(ProjetoClion ${SOURCE_FILES})