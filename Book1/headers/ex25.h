#include <cmath>
#include <iostream>

void ex25() {
    double x, y;

    printf("Write x: ");
    std::cin >> x;
    printf("Calculated function: Y(x) = 3 * x^6 - 6 * x^2 - 7");

    y = 3 * std::pow(x, 6) - 6 * std::pow(x, 2) - 7;
    printf("Y(%.0lf) = %.2lf", x, y);
}
