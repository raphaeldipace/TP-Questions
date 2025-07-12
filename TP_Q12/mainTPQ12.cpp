#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstdlib>

using namespace std;
#include "TPQ12.cpp"
#include "TPQ12.h"

int main(){
    setlocale(LC_ALL,"Portuguese");
    int p1, p2;
    float t1, t2;
    Ar_condicionado ac;

    cout<< " Informe a temperatura externa para o primeiro ar-condicionado : ";
    cin>>t1;
    cout<< " Informe a temperatura externa para o segundo ar-condicionado : ";
    cin>>t2;
    cout<< " Digite a pot�ncia para o primeiro ar-condicionado: ";
    cin>>p1;
    cout<< " Digite a pot�ncia para o segundo ar-condicionado : ";
    cin>>p2;

    //A pot�ncia deve possuir valor m�nimo igual a 0 (desligado) e valor m�ximo igual a 10(pot�ncia m�xima).

    if((p1>10)||(p1<0)||(p2>10)||(p2<0)){
        cout << "\n A pot�ncia possui valor m�ximo igual a 10 e valor m�nimo igual a 0!"<<endl;
    }
    else {
        ac.setTemperaturaExterna(t1, t2);
        ac.setPotencias(p1, p2);
        ac.TemperaturaResultante();
    }

    system("PAUSE");
    return 0;
}
