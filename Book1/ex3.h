#include <iostream>

using namespace std;

int ex3(){
    double a, b;
    double S, P;

    cout << "Write side a: ";
    cin >> a;
    cout << "Write side b: ";
    cin >> b;

    S = a * b;
    P = 2 * (a + b);

    printf("Perimeter of rectangle with sides %lf and %lf is %lf. Square of it is %lf", a, b, P, S);
}
