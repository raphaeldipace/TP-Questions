#include "Professor.h"
#include <string>
#include <math.h>

Professor::Professor(void){
    departamento = 0;
    sala = 0;
}
Professor::setProfessor(){
    string dep;
    int s;

    cout << " Digite seu departamento: ";
    getline(cin, dep);
    cout << " Informe sua sala: ";
    cin >> s;

    departamento = dep;
    sala = s;

    print();
}
string Professor::getDepartamento(){
    return departamento;
}
int Professor::getSala(){
    return sala;
}
void Professor::print(){
    cout << " Nome: "<< getNome() << "\n Email: " << getEmail() << " Idade: " << getIdade();
    cout << " Departamento: " << getDepartamento() << "\n Sala: " << getSala();
}
string Professor::getNome(){
    return nome;
}
int Professor::getIdade(){
    return idade;
}
string Professor::getEmail(){
    return email;
}
