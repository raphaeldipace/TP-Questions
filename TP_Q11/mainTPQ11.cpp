#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstdlib>

using namespace std;
#include "TPQ11.cpp"
#include "TPQ11.h"

int main()
{
    setlocale(LC_ALL,"english");

    int c, h, m, s;
    Clock clk;

    system("cls");

        cout << " Set hour: ";
        cin >> h;
        cout << " Set minutes: ";
        cin >> m;
        cout << " Set seconds: ";
        cin >> s;
        cout << "\n\n";

        system("cls");
    
        clk.setTime(h, m, s);

    system("PAUSE");
    return 0;
}
