#include <iostream>
#define PI 3.141592653589

using namespace std;

void ex7() {
    double r;
    double L, S;

    cout << "Write radius of circle: ";
    cin >> r;

    L = 2*PI*r;
    S = PI*r*r;

    printf("Length of circle is %.4lf, square of it is %.4lf\n", L, S);
}
