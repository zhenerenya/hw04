cmake_minimum_required(VERSION 3.4)

set(CMAKE_CXX_STANSARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(formatter)

add_libriary(formatter STATIC formatter.cpp)