#include <iostream>
#include <math.h>

void ex20() {
    double x1, x2, y1, y2;
    double dist;

    printf("Write x of first point: ");
    std::cin >> x1;
    printf("Write y of first point: ");
    std::cin >> y1;
    printf("Write x of second point: ");
    std::cin >> x2;
    printf("Write y of second point: ");
    std::cin >> y2;

    dist = std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));
    printf("Distance between two dots is: %.2lf", dist);
}
