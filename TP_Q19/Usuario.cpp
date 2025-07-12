#include "Usuario.h"
#include <string>
#include <math.h>

Usuario::Usuario(void){
    nome = "";
    email = "";
    idade = 0;
}
Usuario::setValues(){
    string n, em;
    int id;

    cout << " Digite seu nome: ";
    getline(cin,n);
    cout << " Digite seu email: ";
    getline(cin,em);
    cout << " Informe sua idade: ";
    cin >> id;

    nome = n;
    email = em;
    idade = id;
}
