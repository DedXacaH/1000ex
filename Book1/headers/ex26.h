#include <iostream>
#include <cmath>

void ex26() {
    double x, y;
    
    printf("Write x: ");
    std::cin >> x;
    printf("Calculated function: Y(x) = 4 * (x - 3)^6 - 7 * (x - 3)^3 + 2");

    y = 4 * std::pow(x - 3, 6) - 7 * std::pow(x - 3, 3) + 2;
    printf("Y(%.0lf) = %.2lf", x, y);
}
