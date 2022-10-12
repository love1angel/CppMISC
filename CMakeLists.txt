cmake_minimum_required(VERSION 3.20)
project(stl)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

add_subdirectory(${PROJECT_SOURCE_DIR}/3rdparty/googletest)
add_subdirectory(pattern)

add_executable(${PROJECT_NAME} main.cpp)
