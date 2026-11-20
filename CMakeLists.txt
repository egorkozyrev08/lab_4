cmake_minimum_required(VERSION 3.14)
project(RectangleProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_rectangle
    test_rectangle.cpp
    rectangle.cpp
)

enable_testing()
add_test(NAME RectangleTests COMMAND test_rectangle)