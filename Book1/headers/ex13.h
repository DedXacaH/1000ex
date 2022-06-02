#include <iostream>
#include <math.h>
#define PI 3.141592653589

using namespace std;

void ex13(){
    double R1, R2;
    double S1, S2, S3;

    cout << "Write radius 1: ";
    cin >> R1;
    cout << "Write radius 2: ";
    cin >> R2;
    if (R1 <= R2){
        cout << "You write incorrect radius 2. Try again: ";
        cin >> R2;
    }

    S1 = PI * pow(R1, 2);
    S2 = PI * pow(R2, 2);

    S3 = (S1 < S2) ? S2 - S1 : S1 - S2;

    printf("Square of first circle is %.2lf, square of second circle is %.2lf, square of ring is %.2lf\n",
    S1, S2, S3);
}