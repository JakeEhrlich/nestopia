cmake_minimum_required(VERSION 3.9)

project(nestopia)

add_subdirectory(core)

set(CMAKE_CXX_FLAGS "-O3 -Wno-attributes -std=c++11")

add_executable(main main.cc)

target_link_libraries(main libnst)
