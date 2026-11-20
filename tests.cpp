#include <gtest/gtest.h>
#include "rectangle.cpp"

TEST(RectangleTest, AreaPositive) {
    EXPECT_DOUBLE_EQ(area(10, 5), 50);
}

TEST(RectangleTest, AreaSquare) {
    EXPECT_DOUBLE_EQ(area(10, 10), 100);
}

TEST(RectangleTest, AreaZero) {
    EXPECT_DOUBLE_EQ(area(10, 0), 0);
}

TEST(RectangleTest, AreaOne) {
    EXPECT_DOUBLE_EQ(area(1, 1), 1);
}

TEST(RectangleTest, PerimeterPositive) {
    EXPECT_DOUBLE_EQ(perimeter(10, 5), 30);
}

TEST(RectangleTest, PerimeterSquare) {
    EXPECT_DOUBLE_EQ(perimeter(10, 10), 40);
}

TEST(RectangleTest, PerimeterZero) {
    EXPECT_DOUBLE_EQ(perimeter(10, 0), 20);
}

TEST(RectangleTest, PerimeterOne) {
    EXPECT_DOUBLE_EQ(perimeter(1, 1), 4);
}
