cmake_minimum_required(VERSION 3.14)

project(RectangleProject)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

find_package(GTest REQUIRED)

add_library(rectangle rectangle.cpp)

add_executable(test_rectangle test_rectangle.cpp)

target_link_libraries(test_rectangle
    rectangle
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_rectangle)
