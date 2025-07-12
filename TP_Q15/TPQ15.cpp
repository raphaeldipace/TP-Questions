#include "TPQ15.h"
#include <math.h>

listaNome::setNome(string fnome){
    nome = fnome;
}
string listaNome::getNome(){
    return nome;
}

Lista::Lista(int n){
    nomes = new listaNome[n];
    num = 0;
}
void Lista::addNome(listaNome name){
        nomes[num] = name;
        num++;
}
void Lista::printLista(){
    for(unsigned i = 0; i < num; i++){
        cout << "=========================================" << endl;
        cout << "Nome: " << nomes[i].getNome() << endl;
        }
}

Lista::~Lista(){
    delete []nomes;
}
