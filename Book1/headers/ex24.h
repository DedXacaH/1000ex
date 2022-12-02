#include <iostream>

void ex24() {
    int a, b, c, tmp;
    printf("Write three numbers: ");
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    printf("\r\n\r\n");
    printf("Original: a = %d, b = %d, c = %d", a, b, c);

    tmp = a;
    a = b;
    b = c;
    c = tmp;

    printf("Swapped: a = %d, b = %d, c = %d", a, b, c);
}
