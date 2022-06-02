#include <iostream>
#include <math.h>
#define PI 3.141592653589

using namespace std;

void ex14() {
    double L;
    double S, R;

    cout << "Write length of circle line: ";
    cin >> L;

    R = L / (2 * PI);
    S = PI * pow(R, 2);

    printf("Radius of circle is %.2lf, square of circle is %.2lf.\n", R, S);
}