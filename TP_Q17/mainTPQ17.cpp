#include <iostream>
#include <iomanip>
#include <string>
#include <locale.h>
#include <cstdlib>

using namespace std;
#include "Pessoa.cpp"
#include "Empregado.cpp"

int main(){
    setlocale(LC_ALL,"Portuguese");
    string n;
    long int cpf;
    int s;
    float sb, c;

    Pessoa p;
    Empregado e;

    cout << " Informe o nome da pessoa: " << endl;
    getline(cin,n);
    p.setNome(n);

    cout << " Digite o CPF: " << endl;
    cin >> cpf;
    p.setCPF(cpf);

    cout << " Digite o sal�rio base: ";
    cin >> sb;
    cout << " Digite o valor em porcentagem retido para o imposto de renda : ";
    cin >> c;
    cout << " Digite o n�mero da se��o: ";
    cin >> s;
    e.setSalario(sb);
    e.setIR(c);
    e.setNS(s);

    p.imprimeNomeCPF();
    e.calcularSalario();

    system("PAUSE");
    return 0;
}
