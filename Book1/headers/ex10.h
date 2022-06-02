#include <iostream>
#include <math.h>

using namespace std;

void ex10() {
    double a, b;
    double sum, div, mult, sub;

    cout << "Write number a: ";
    cin >> a;
    cout << "Write number b: ";
    cin >> b;

    sum = pow(a,2) + pow(b,2);
    sub = pow(a,2) - pow(b,2);
    mult = pow(a,2) * pow(b,2);
    div = pow(a,2) / pow(b,2);

    printf("Sum of squares: %.0lf, subtract of squares: %.0lf, multiply of squares: %.0lf, divide of squares: %.2lf.\n",
    sum, sub, mult, div);
}
