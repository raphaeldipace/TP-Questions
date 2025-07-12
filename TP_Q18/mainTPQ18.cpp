#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>

using namespace std;

#include "Empresa.cpp"
#include "Sistema.cpp"

int main(){
    setlocale(LC_ALL,"Portuguese");
    empresa e;
    Sistema s;

    string n;
    int C;

    float i, f;
    int v;


    cout << " Informe o valor total dos impostos em reais: " << endl;
    cin >> i;
    cout << " Informe o faturamento anual da empresa em reais: " << endl;
    cin >> f;

    s.setValues(i,f);

        cout << " Digite o CGC da Empresa :";
        cin >> C;
        cout << " A empresa possui cadastro no SIMPLES?\n   1- Sim         2- N�o \n ";
        cin >> v;

        s.setCGC(C);

        if(v == 1){
            s.cadastro();
        }
        if(v == 2){
            s.semCadastro();
        }


    system("PAUSE");
    return 0;
}
