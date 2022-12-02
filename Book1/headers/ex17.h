#include <iostream>
#include <math.h>

using namespace std;

void ex17() {
    double a, b, c;
    double lengthAC, lengthBC, sum;

    cout << "Write point a: ";
    cin >> a;
    cout << "Write point b: ";
    cin >> b;
    cout << "Write point c: ";
    cin >> c;

    lengthAC = c - a;
    lengthBC = c - b;
    sum = lengthAC + lengthBC;

    printf("Length between point A and point C: %.2lf,"
            " length between point B and point C: %.2lf,"
            " sum of this lengthes: %.2lf.\n",
            lengthAC, lengthBC, sum);
}
