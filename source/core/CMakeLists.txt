include_directories(.)

file(GLOB CORE_FILES *.cpp)
file(GLOB API_FILES api/*.cpp)
file(GLOB BOARD_FILES board/*.cpp)
file(GLOB INPUT_FILES input/*.cpp)
file(GLOB VSSYS_FILES vssystem/*.cpp)

add_definitions(-DNST_NO_ZLIB)

set(CMAKE_CXX_FLAGS "-O3 -Wno-attributes -std=c++11")

add_library(libnst ${CORE_FILES} ${API_FILES} ${BOARD_FILES} ${INPUT_FILES} ${VSSYS_FILES})
