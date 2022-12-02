#include <iostream>
#include <math.h>

void ex11(){
    double a, b;
    double sum, sub, mult, div;

    std::cout << "Write number a: ";
    std::cin >> a;
    if (a == 0) {
        std::cout << "You write incorrect number. Try again: ";
        std::cin >> a;
    }
    std::cout << "Write number b: ";
    std::cin >> b;
    if (b == 0) {
        std::cout << "You write incorrect number. Try again: ";
        std::cin >> b;
    }

    sum = abs(a) + abs(b);
    sub = abs(a) - abs(b);
    mult = abs(a) * abs(b);
    div = abs(a) / abs(b);

    printf("Absolute a and b:\nSum: %.0lf;\nSub: %.0lf;\nMult: %.0lf;\nDiv: %.2lf.\n", 
    sum, sub, mult, div);
}
