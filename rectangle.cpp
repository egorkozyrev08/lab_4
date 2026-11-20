#include <gtest/gtest.h>
#include "rectangle.h"


#include <iostream>

double area(double a, double b) {
    return a * b;
}

double perimeter(double a, double b) {
    return 2 * (a + b);
}

int main() {
    double a, b;

    std::cout << "Enter a and b: ";
    std::cin >> a >> b;

    std::cout << "Area: " << area(a, b) << std::endl;
    std::cout << "Perimeter: " << perimeter(a, b) << std::endl;

    return 0;
}
