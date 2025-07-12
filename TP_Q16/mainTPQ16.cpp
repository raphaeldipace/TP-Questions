#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
#include <string>

using namespace std;

#include "Imovel.cpp"
#include "Novo.cpp"
#include "Velho.cpp"


int main(){
    setlocale(LC_ALL,"Portuguese");
    string a;
    int c;

    novo n;
    velho v;

    cout << " Informe o endere�o do im�vel: ";
    getline(cin, a);
    cout << " Selecione uma op��o para o im�vel \n 1- Novo    2-Velho \n ";
    cin >> c;

    if(c==1){
        n.setAddress(a);
        n.aumento();
    }
    if(c==2){
        v.setAddress(a);
        v.desconto();
    }

    system("PAUSE");
    return 0;
}
