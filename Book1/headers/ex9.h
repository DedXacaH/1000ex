#include <iostream>
#include <math.h>

using namespace std;

void ex9() {
    double a, b, mean;

    cout << "Write number a: ";
    cin >> a;
    if (a < 0) {
        cout << "Write positive number: ";
        cin >> a;
    }

    cout << "Write number b: ";
    cin >> b;
    if (b < 0) {
        cout << "Write positive number: ";
        cin >> b;
    }

    mean = sqrt(a*b);

    cout << "Geometric mean is " << mean << endl;
}
