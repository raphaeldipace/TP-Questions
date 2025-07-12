#include "Aluno.h"
#include "Usuario.cpp"
#include <string>
#include <math.h>

Aluno::Aluno(void){
    numeroMatricula = 0;
    curso = "";
}
Aluno::setAluno(){

    string m, curs;

    cout << " Digite seu n�mero de matr�cula: ";
    getline(cin, m);
    cout << " Informe seu curso: ";
    getline(cin, curs);

    numeroMatricula = m;
    curso = curs;
    
    print();
}
string Aluno::getMatricula(){
    return numeroMatricula;
}
string Aluno::getCurso(){
    return numeroMatricula;
}
void Aluno::print(){
    cout << " Nome: "<< getNome() << "\n Email: " << getEmail() << " Idade: " << getIdade();
    cout << " Curso: " << getCurso() << " N�mero da matr�cula: " << getMatricula();
}
string Aluno::getNome(){
    return nome;
}
int Aluno::getIdade(){
    return idade;
}
string Aluno::getEmail(){
    return email;
}
