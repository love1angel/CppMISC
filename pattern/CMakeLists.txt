cmake_minimum_required(VERSION 3.20)
project(pattern)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

# GOF
add_subdirectory(1_1_creational)
add_subdirectory(1_2_structural)
add_subdirectory(1_3_behavioral)
