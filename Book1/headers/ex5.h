#include <iostream>
#include <math.h>

using namespace std;

void ex5() {
    double a;
    double V, S;

    cout << "Write side of cube: ";
    cin >> a;

    V = a*a*a;
    S = 6*pow(a,2);

    printf("Volume of cube is %.0lf, square of cube is %.0lf.\n", V, S);
}
