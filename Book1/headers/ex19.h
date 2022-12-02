#include <iostream>

using namespace std;

void ex19() {
    double x1, x2, y1, y2;
    double P, S;
    double x, y;
    
    printf("Write x of first point: ");
    cin >> x1;
    printf("Write y of first point: ");
    cin >> y1;
    printf("Write x of second point: ");
    cin >> x2;
    printf("Write y of second point: ");
    cin >> y2;

    x = (x1 > x2) ? x1 - x2 : x2 - x1;
    y = (y1 > y2) ? y1 - y2 : y2 - y1;

    S = x * y;
    P = 2 * (x + y);

    printf("Square of this figure is: %.2lf;\r\n"
           "Perimeter of this figure is: %.2lf;\r\n", S, P);
}
