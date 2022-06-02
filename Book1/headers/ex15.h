#include <iostream>
#include <math.h>
#define PI 3.141592653589

using namespace std;

void ex15() {
    double S;
    double D, L;

    cout << "Write square of circle: ";
    cin >> S;

    try {
        D = (sqrt(S) / PI) * 4;
        L = D / PI;
        printf("Diameter of circle is %.2lf, length of line of circle is %.2lf.\n");
    }
    catch (exception& ex) {
        cout << "Exception: " << ex.what() << endl;
    }
}