cmake_minimum_required(VERSION 3.5)

project(otus_Cpp_13_ML LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(otus_Cpp_13_ML main.cpp classifierFashion.h classifierFashion.cpp MNISTreader.h MNISTreader.cpp)
