#include <iostream>
#include "headers/ex1.h"
#include "headers/ex2.h"
#include "headers/ex3.h"
#include "headers/ex4.h"
#include "headers/ex5.h"
#include "headers/ex6.h"
#include "headers/ex7.h"
#include "headers/ex8.h"
#include "headers/ex9.h"
#include "headers/ex10.h"
#include "headers/ex11.h"
#include "headers/ex12.h"
#include "headers/ex13.h"
#include "headers/ex14.h"
#include "headers/ex15.h"
#include "headers/ex16.h"
#include "headers/ex17.h"
#include "headers/ex18.h"
#include "headers/ex19.h"
#include "headers/ex20.h"
#include "headers/ex21.h"
#include "headers/ex22.h"
#include "headers/ex23.h"
#include "headers/ex24.h"
#include "headers/ex25.h"
#include "headers/ex26.h"

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
            case 8:
                ex8();
                break;
            case 9:
                ex9();
                break;
            case 10:
                ex10();
                break;
            case 11:
                ex11();
                break;
            case 12:
                ex12();
                break;
            case 13:
                ex13();
                break;
            case 14:
                ex14();
                break;
            case 15:
                ex15();
                break;
            case 16:
                ex16();
                break;
            case 17:
                ex17();
                break;
            case 18:
                ex18();
                break;
            case 19:
                ex19();
                break;
            case 20:
                ex20();
                break;
            case 21:
                ex21();
                break;
            case 22:
                ex22();
                break;
            case 23:
                ex23();
                break;
            case 24:
                ex24();
                break;
            case 25:
                ex25();
                break;
            case 26:
                ex26();
                break;
            default:
                cout << "You write wrong exercise number. Try again.\nTo exit write 0.\n\n";
                break;
        }
    }
}
