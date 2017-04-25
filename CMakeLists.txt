cmake_minimum_required(VERSION 2.8)

project(KWIC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${CMAKE_BINARY_DIR})

add_definitions("-Wall -Wextra")

file(GLOB mains_source "*.cpp" "*.h*")
LIST(SORT mains_source)

add_executable(${PROJECT_NAME} ${mains_source})
