#include <iostream>

void ex22() {
    int a, b, tmp;
    printf("Write two numbers: ");
    std::cin >> a;
    std::cin >> b;
    printf("\r\n\r\n");
    printf("Original: a = %d, b = %d", a, b);

    tmp = a;
    a = b;
    b = tmp;

    printf("Swapped: a = %d, b = %d", a, b);
}
