#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <cstdlib>

using namespace std;

#include "TPQ15.cpp"
#include "TPQ15.h"

int main()
{
    int n, i=0;
    string fnome;
    listaNome name;
    int opc;

    setlocale(LC_ALL,"Portuguese");
    cout << " Informe quantos nomes ser�o inseridos na lista: ";
    cin >> n;
    Lista l(n);

     while(1){
            cout << " Digite:\n 1- Para adicionar nomes na lista\n 2- Para ver lista\n 3- Para sair " << endl;
            cin >> opc;

            system("cls");

       switch(opc){
        case 1:
            if(i>=n){
                l.printLista();
                return 0;
               }
               cout << " Digite o nome: ";
               cin.ignore();
               getline(cin, fnome);
               name.setNome(fnome);
               l.addNome(name);

               i++;
          break;

        case 2:
            l.printLista();
            system("cls");
            break;

        case 3:
            return 0;

    }
     system("pause");
    }

    l.printLista();

    system("PAUSE");
    return 0;
}
