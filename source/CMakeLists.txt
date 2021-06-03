cmake_minimum_required(VERSION 3.9)

project(nestopia)

add_subdirectory(core)

add_executable(main main.cc)

target_link_libraries(main libnst)
