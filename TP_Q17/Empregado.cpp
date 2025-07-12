#include <math.h>
#include "Empregado.h"

float Empregado::setSalario(float sb){
    salarioBase = sb;
}
float Empregado::setIR(float c){
    IR= c;
}
int Empregado::setNS(int s){
    numeroSecao = s;
}
float Empregado::getIR(){
    return IR;
}
int Empregado::getNS(){
    return numeroSecao;
}
float Empregado::getSalario(){
    return salarioBase;
}

Empregado::calcularSalario(){
    float SL;
    float s1, s2;
    s1= getSalario();
    s2= getIR();
    s2= s2/100;

    s2= s1*s2;

    SL = s1 - s2;                         //Salário líquido
    Imprime(SL);
}

Empregado::Imprime(float SL){
    cout << " Número da seção : " << getNS() <<endl;
    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout << " Salário líquido : R$" << SL << "\n\n";
}
