#include <iostream>
#include <cmath>

void ex27() {
    int a, a2, a4, a8;

    printf("Write number A: ");
    std::cin >> a;
    
    a2 = std::pow(a, 2);
    a4 = std::pow(a2, 2);
    a8 = std::pow(a4, 2);
    printf("A: %d, A^2: %d, A^4: %d, A^8: %d", a, a2, a4, a8);
}
