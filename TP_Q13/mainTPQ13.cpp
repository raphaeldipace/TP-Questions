#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

#include "TPQ13.cpp"
#include "TPQ13.h"

int main(){
    setlocale(LC_ALL,"Portuguese");
    float s1, s2, T;
    ContaDePoupanca cp;


    cout << " Informe o saldo do primeiro poupador: ";
    cin >> s1;
    cout << " Informe o saldo do segundo poupador: ";
    cin >> s2;

    cp.setSaldos(s1,s2);

    cout << " Digite a taxa de juros anual em porcentagem: ";
    cin >> T;

    cp.modifiqueTaxaDeJuros(T);  //Ajusta a taxa de juros do m�s atual.
    cp.calculeRendimentoMensal(); //Calcula o rendimento mensal a partir da taxa de juros anual.
    cp.imprime();

    cout << "\n\n Digite a taxa de juros anual em porcentagem para o pr�ximo m�s: ";
    cin >> T;

    cp.modifiqueTaxaDeJuros(T);
    cp.calculeRendimentoMensal();
    cp.imprime();


    system("PAUSE");
    return 0;
}
