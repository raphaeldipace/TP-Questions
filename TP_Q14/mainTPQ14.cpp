#include <iostream>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <cstdlib>

using namespace std;

#include "TPQ14.cpp"
#include "TPQ14.h"

int main(){
    setlocale(LC_ALL,"Portuguese");
    string name, c, nomef;
    int i=0, n, opc, dep;
    int d, m, a;
    float sl;
    funcionario f;
    Empresa e;

    cout << " Cria��o da empresa\n\n";
    cout << " Digite o nome da empresa: ";
    getline(cin, name);
    e.setNome(name);

    cout << " Digite o CNPJ (formato: XX.XXX.XXX/YYYY-ZZ):";
    getline(cin, c);
    e.setCNPJ(c);

    e.imprimeNome();
    e.imprimeCNPJ();

    cout << " Informe o n�mero m�ximo de funcion�rios: ";
    cin >> n;

    Lista l(n);

    while(1){
        system("cls");
        cout << "1 - Adicionar funcion�rio" << endl
             << "2 - Mostrar folha de pagamento" << endl
             << "3 - Valor total da folha de pagamento" << endl
             << "4 - Verificar funcion�rio com maior sal�rio" << endl
             << "5 - Mostrar funcion�rios por departamento" << endl
             << "6 - Aumentar sal�rio de todos funcion�rios por departamento"<<endl    // Op��o para aumentar sal�rio de todos por departamento.
             << "7 - Sair" << endl;

        cout << endl << "Digite a op��o: ";
        cin >> opc;

        if(opc == 7)
            break;

        system("cls");

        switch(opc){
        case 1:
            if(i >= n){
                cout << " Setor cheio!!!" << endl;
                break;
            }
            cout << " Digite o nome do funcion�rio: ";
            cin.ignore();
            getline(cin, nomef);
            f.setNomeFuncionario(nomef);

            cout << " Digite o dia de admiss�o de " << f.getNomeFuncionario() << ": ";
            cin >> d;
            cout << " Digite o m�s de admiss�o de " << f.getNomeFuncionario() << ": ";
            cin >> m;
            cout << " Digite o ano de admiss�o de " << f.getNomeFuncionario() << ": ";
            cin >> a;
            f.Data(d,m,a);

            f.imprimeData();

            cout << " Digite o sal�rio de " << f.getNomeFuncionario() << ": ";
            cin >> sl;
            f.setSalario(sl);

            cout << " Digite o departamento de " << f.getNomeFuncionario() << ": ";
            cin >> dep;
            f.setDep(dep);

            l.addFunc(f);
            i++;
            break;
        case 2:
            if(i == 0){
                cout << " N�o h� Funcion�rios!!!" << endl;
                break;
            }
            l.imprimeFolha();
            break;
        case 3:
            if(i == 0){
                cout << " N�o h� Funcion�rios!!!" << endl;
                break;
            }

            std::cout << std::fixed << std::showpoint;
            std::cout.precision(2);
            std::cout << " Valor total da folha de pagamento: R$" << l.valorFolha() << endl;
            break;
        case 4:
            if(i == 0){
                cout << " N�o h� Funcion�rios!!!" << endl;
                break;
            }
            cout << " Funcion�rio com maior sal�rio: " << l.MaiorSalario() << endl;
            break;
        case 5:
            if(i == 0){
                cout << " N�o h� Funcion�rios!!!" << endl;
                break;
            }
            cout << " Digite um departamento: ";
            cin >> dep;
            l.mostraPorDep(dep);
            break;
        case 6:
            if(i == 0){
                cout << " N�o h� Funcion�rios!!!" << endl;
                break;
            }

            l.aumentarSalario();
            break;

        default:
            cout << " Op��o inv�lida!!!" << endl;
            break;
        }
        system("pause");
    }


    system("PAUSE");
    return 0;
}
