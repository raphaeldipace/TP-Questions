#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

class ContaBancaria
{
    string NomeTitular;
    int NumeroDaConta;
    float Saldo;

public:
    setDados(string, int, float);

    operacoes(float);
};

ContaBancaria::setDados(string name, int nc, float s)
{
    NomeTitular = name;
    NumeroDaConta = nc;
    Saldo = s;
    cout << "\n\n\n Nome do Titular: " << NomeTitular << "        N�mero da conta: " << NumeroDaConta << "\n\n";

    operacoes(Saldo);
}

ContaBancaria::operacoes(float Saldo)
{
    int choice;
    float x;

    cout << " 1- Realizar saque   2- Fazer Dep�sito   3- Consultar Saldo   4- Sair" << endl;
    cin >> choice;

    if(choice == 1){
        if (Saldo == 0){
            cout << " N�o est� depositado dinheiro em sua conta para realizar o saque.\n\n";
        } else {

            cout << " Digite o quanto deseja retirar." << "      Saldo: R$" << Saldo << endl;
            cin >> x;
            if(x<0){
                cout << " Apenas n�meros positivos." << endl;
            }
            if((Saldo-x)<0){
                cout << " N�o est� depositado dinheiro suficiente em sua conta para realizar o saque.\n\n";
            }
            if((Saldo-x)>=0){
                Saldo = Saldo - x;
            }
        }
    }
    if(choice == 2){
            cout << " Digite o quanto deseja adicionar." << "      Saldo: R$" << Saldo << endl;
            cin >> x;

            if(Saldo<0){
              cout << " Apenas n�meros positivos." << endl;
            }
            if(Saldo>=0){
             Saldo = Saldo + x;
            }

    }
    if(choice == 3){

            cout << " O seu saldo atual: R$" << Saldo << "\n\n";

    }
    if(choice == 4){
            return 0;
    }
    operacoes(Saldo);
}

int main()
{

    string name;
    int nc = 0;
    float s = 0;

    ContaBancaria cb;

    setlocale(LC_ALL, "Portuguese");

    cout << " Digite o nome do titular: ";
    getline(cin, name);
    cout << " Digite o n�mero da conta: ";
    cin >> nc;

    cb.setDados(name, nc, s);


    system("PAUSE");
    return 0;
}



