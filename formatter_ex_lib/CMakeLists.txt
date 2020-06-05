cmake_minimum_requiried(VERSION 3.4)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(formatter_ex)

include_directories(../formatter_lib)
add_subdirictory(../formatter_lib formatter)

add_library(formatter_ex STATIC formatter_ex.cpp)

target_link_libraries(formatter_ex formatter)
