#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstdlib>

using namespace std;
#include "TPQ10.cpp"
#include "TPQ10.h"

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1, d1, n2, d2;
    float f1, f2;

    Rational r;

    cout << " Informe o numerador da primeira fra��o: ";
    cin >> n1;
    cout << " Informe o denominador da primeira fra��o: ";
    cin >> d1;

    r.setFracao1(n1, d1);

    cout << " Informe o numerador da segunda fra��o: ";
    cin >> n2;
    cout << " Informe o denominador da segunda fra��o: ";
    cin >> d2;

    r.setFracao2(n2, d2);

    f1 = r.getF1();
    f2 = r.getF2();

    r.multiplica(f1, f2);
    r.dividir(f1, f2);

    system("PAUSE");
    return 0;
}
