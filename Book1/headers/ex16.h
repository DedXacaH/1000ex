#include <iostream>
#include <math.h>

using namespace std;

void ex16(){
    double x1, x2;
    double length;

    cout << "Write point x1: ";
    cin >> x1;
    cout << "Write point x2: ";
    cin >> x2;

    length = (x1 < x2) ? abs(x2 - x1) : abs(x1 - x2);
    cout << "Length between tow points is " << length << endl;
}