#include <iostream>

using namespace std;

int ex5() {
    double a;
    double V, S;

    cout << "Write side of cube: ";
    cin >> a;

    V = a*a*a;
    S = 6*pow(a,2);

    printf("Volume of cube is %lf, square of cube is %lf.", V, S);
    return 0;
}
