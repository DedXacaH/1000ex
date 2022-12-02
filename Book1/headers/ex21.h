#include <iostream>
#include <math.h>

void ex21() {
    double x[3], y[3], dist[3];
    double P = .0, S = 1;

    for (int i = 0; i < 3; i++) {
        printf("Write %d x of triangle apex: ", i + 1);
        std::cin >> x[i];
        printf("Write %d y of triangle apex: ", i + 1);
        std::cin >> y[i];
    }
    
    dist[0] = std::sqrt(std::pow((x[1] - x[0]), 2) + std::pow((y[1] - y[0]), 2));
    dist[1] = std::sqrt(std::pow((x[2] - x[1]), 2) + std::pow((y[2] - y[1]), 2));
    dist[2] = std::sqrt(std::pow((x[0] - x[2]), 2) + std::pow((y[0] - y[2]), 2));

    for (int i = 0; i < 3; i++) {
        P += dist[i];
    }
    double p = P/2;
    S = std::sqrt(p * (p - dist[0]) * (p - dist[1]) * (p - dist[2]));

    printf("Square of triangle is: %.2lf\r\n"
           "Perimeter is: %.2lf\r\n", 
           S, P);
}
