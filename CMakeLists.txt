cmake_minimum_required(VERSION 3.1)
project(soc)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

find_package(xtl REQUIRED)
find_package(xtensor REQUIRED)

add_executable(soc src/main.cpp src/soc.cpp)

target_link_libraries(soc xtensor)