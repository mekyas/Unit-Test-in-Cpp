cmake_minimum_required(VERSION 3.18.1)

set(This FactorialTests)

set(Sources
    FactorialTests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    Factorial
)

add_test(
    NAME ${This}
    COMMAND ${This}
)