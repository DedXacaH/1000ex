#include <iostream>
#include <math.h>

using namespace std;

void ex11(){
    double a, b;
    double sum, sub, mult, div;

    cout << "Write number a: ";
    cin >> a;
    if (a == 0) {
        cout << "You write incorrect number. Try again: ";
        cin >> a;
    }
    cout << "Write number b: ";
    cin >> b;
    if (b == 0) {
        cout << "You write incorrect number. Try again: ";
        cin >> b;
    }

    sum = abs(a) + sum(b);
    sub = abs(a) - abs(b);
    mult = abs(a) * abs(b);
    div = abs(a) / abs(b);

    printf("Absolute a and b:\nSum: %.0lf;\nSub: %.0lf;\nMult: %.0lf;\nDiv: %.2lf.\n", 
    sum, sub, mult, div);
}