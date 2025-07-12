#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstdlib>

using namespace std;

union temperatura
{
    float Celsius;             // Representando a temperatura em Celsius do tipo float.
    float Fahrenheit;          // Representando a temperatura em Fahrenheit do tipo float.
};

float celsius_fahrenheit(float x);
float fahrenheit_celsius(float x);

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int a;
    float x, r;
    union temperatura t;

    cout << " Escolha a convers�o de temperatura desejada.\n Digite 1 para para Celsius-Fahrenheit, ou 2 para Fahrenheit-Celsius." << endl;
    cin >> a;

    if (a==1){

        cout << " Informe a temperatura em Celsius:" << endl;
        cin >> x ;
        r = celsius_fahrenheit(x);
    }
    if (a==2){

        cout << " Informe a temperatura em Fahrenheit:" << endl;
        cin >> x ;
        r = fahrenheit_celsius(x);
    }
    if ((a!=1) && (a!=2)) {
        cout << " Apenas n�meros inteiros positivos iguais a 1 ou 2!\n";
    }

    system("PAUSE");
    return 0;
}

float celsius_fahrenheit(float x)
{
    union temperatura t;
    t.Fahrenheit = (x*9/5) + 32;

    cout << fixed;
    cout.precision(2);

    cout << " A temperatura em Fahrenheit: " << t.Fahrenheit << endl;
}

float fahrenheit_celsius(float x)
{
    union temperatura t;

    t.Celsius = ((x-32)*5/9);

    cout << fixed;
    cout.precision(2);

    cout << " A temperatura em Celsius: " << t.Celsius << endl;
}
