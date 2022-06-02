#include <iostream>

using namespace std;

void ex3(){
    double a, b;
    double S, P;

    cout << "Write side a: ";
    cin >> a;
    cout << "Write side b: ";
    cin >> b;

    S = a * b;
    P = 2 * (a + b);

    printf("Perimeter of rectangle with sides %.0lf and %.0lf is %.0lf. Square of it is %.0lf\n", a, b, P, S);
}
