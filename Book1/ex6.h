#include <iostream>

using namespace std;

int ex6() {
    double a, b, c;
    double V, S;

    cout << "Write side a of parallelepiped: ";
    cin >> a;
    cout << "Write side b of parallelepiped: ";
    cin >> b;
    cout << "Write side c of parallelepiped: ";
    cin >> c;

    V = a*b*c;
    S = 2*(a*b + b*c + a*c);

    printf("V = %lf, S = %lf.", V, S);

    retur 0;
}
