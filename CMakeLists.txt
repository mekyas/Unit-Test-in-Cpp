cmake_minimum_required(VERSION 3.18.1)

set(This Factorial)
set(GOOGLETEST_PROJECT_LOCATION ../googletest)
project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory( ${GOOGLETEST_PROJECT_LOCATION} build)


set(Headers
    factorial.hpp
)

set(Sources
    factorial.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)