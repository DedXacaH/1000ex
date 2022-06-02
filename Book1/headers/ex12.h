#include <iostream>
#include <math.h>

using namespace std;

void ex12() {
    double a, b;
    double c, P;

    cout << "Write cathetus a: ";
    cin >> a;
    cout << "Write cathetus b: ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    P = a + b + c;

    printf("Hypotenuse of triangle is %.2lf, perimeter of triangle is %.2lf.\n", c, P); 
}