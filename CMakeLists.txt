cmake_minimum_required(VERSION 3.19)
project(demo)

add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

set(CMAKE_CXX_STANDARD 14)

add_executable(demo main.cpp)

target_link_libraries(demo gtest gtest_main)
