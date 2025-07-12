#include "Pessoa.h"

Pessoa::Pessoa(void){
    CPF = 0;
    nome= ("Sem Nome");
}
void Pessoa::setNome(string n){
    nome = n;
}
void Pessoa::setCPF(long int cpf){
    CPF = cpf;
}
Pessoa::imprimeNomeCPF(void){
    cout << "\n\n Nome: " << nome << "\n";
    cout << " CPF: " << CPF << "\n\n";
}
