cmake_minimum_required(VERSION 3.20)
project(pattern)

set(CMAKE_CXX_STANDARD 20)
set(THREADS_PREFER_PTHREAD_FLAG ON)

enable_testing()

add_subdirectory(${PROJECT_SOURCE_DIR}/3rdparty/googletest)
add_subdirectory(pattern)

add_executable(main main.cpp)

find_package(Threads REQUIRED)
target_link_libraries(main Threads::Threads)
