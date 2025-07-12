#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
#include <string>
#include <math.h>

using namespace std;
#include "Produto.cpp"
#include "Produto1.cpp"
#include "Produto2.cpp"

int main(){
    setlocale(LC_ALL,"Portuguese");
    int c, d, e, es;

    Produto p;
    Produto1 p1;
    Produto2 p2;

    p1.setValues();
    p2.setValues();

    cout << "\n\n  Escolha o produto: \n\n  1- Produto 1    2 - Produto 2    3- Ambos\n\n  -> ";
    cin >> c;

    e= p1.getEstoque();
    es= p2.getEstoque();


    if(c==1){
        p1.imprime();
        cout << " Deseja ter desconto? \n 1- Sim    2- Não \n : ";
        cin >> d;
        if(d==1){
            system("cls");
            p1.verifEstoque(e);
        }
        if(d==2){
            return 0;
        }
    }
    if(c==2){
        p2.imprime();
        cout << " Deseja ter desconto? \n 1- Sim    2- Não \n : ";
        cin >> d;
        if(d==1){
            system("cls");
            p2.verifEstoque(es);
        }
        if(d==2){
            return 0;
        }
    }
    if(c==3){
        p1.imprime();
        p2.imprime();

        cout << " Deseja ter desconto? \n 1- Sim    2- Não \n : ";
        cin >> d;
        if(d==1){
            system("cls");
            p1.verifEstoque(e);
            p2.verifEstoque(es);
        }
        if(d==2){
            return 0;
        }
    }

    system("PAUSE");
    return 0;
}
