cmake_minimum_required(VERSION 3.13)
project(Programming_Contest)

add_executable(output output/main.cpp output/main.cpp)
add_executable(testrunner testrunner/main.cpp)
file(GLOB TASKS "tasks/*.cpp")
file(GLOB_RECURSE HEADERS "library/*.hpp" )

set(-D CMAKE_CXX_FLAGS = "-stdlib=libstdc++")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -gdwarf-3")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -gdwarf-3")
ADD_DEFINITIONS(-std=c++17)

add_executable(Programming_Contest main.cpp)