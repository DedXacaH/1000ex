#include <iostream>
#include <math.h>

using namespace std;

void ex18() {
    double a, b, c;
    double lengthAC, lengthBC, mult;

    cout << "Write point a: ";
    cin >> a;
    cout << "Write point b: ";
    cin >> b;
    cout << "Write point c: ";
    cin >> c;

    lengthAC = (a < c) ? c - a : 0;
    lengthBC = (b > c) ? b - c : 0;
    mult = lengthAC * lengthBC;

    printf("Length between point A and point C: %.2lf,"
        " length between point B and point C: %.2lf,"
        " mult of this lengthes: %.2lf.\n",
        lengthAC, lengthBC, mult);
}
