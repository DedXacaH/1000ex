#include <iostream>

void ex23() {
    int a, b, c, tmp;
    printf("Write three numbers: ");
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    printf("\r\n\r\n");
    printf("Original: a = %d, b = %d, c = %d", a, b, c);

    tmp = c;
    c = b;
    b = a;
    a = tmp;

    printf("Swapped: a = %d, b = %d, c = %d", a, b, c);
}
