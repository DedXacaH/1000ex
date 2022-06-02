#include <iostream>
#include "headers/ex1.h"
#include "headers/ex2.h"
#include "headers/ex3.h"
#include "headers/ex4.h"
#include "headers/ex5.h"
#include "headers/ex6.h"
#include "headers/ex7.h"

using namespace std;

int main() {
    int exe = 0;

    while (true){
        cout << "Write a number of exercise: ";
        cin >> exe;
        switch (exe){
            case 0:
                return 0;
                break;
            case 1:
                ex1();
                break;
            case 2:
                ex2();
                break;
            case 3:
                ex3();
                break;
            case 4:
                ex4();
                break;
            case 5:
                ex5();
                break;
            case 6:
                ex6();
                break;
            case 7:
                ex7();
                break;
            default:
                cout << "You write wrong exercise number. Try again.\n";
                break;
        }
    }
}
