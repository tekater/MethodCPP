#pragma warning(disable:4996) // Очень важно - без этого strcat не работает.

#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>

#include "_work_file2.h"
#include "_work_file_.h"
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    //system("color B5");
    void (*PointerMenu[5])(int,int) = { act_plus,act_minus,act_del,act_mult,act_close };
    int number = 1; int a; int b;
    cout << "\n\t1 - Plus\n\t2 - Minus\n\t3 - Del\n\t4 - Mult\n\t5 - close";
    
    while (true) {
        while (true) {
            cout << "\n\tSelect action: "; cin >> number;

            cout << "\nA: "; cin >> a;
            cout << "\nB: "; cin >> b;

            (PointerMenu[number - 1](a, b));
        }
    }

}
