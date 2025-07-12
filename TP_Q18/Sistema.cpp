#include <math.h>
#include "Sistema.h"

float Sistema::cadastro(){
    empresa e;
    float f = getFaturamento();
    float i = getImpostos();
    int a = 1;

    i = i*0.7;

    setValues(i,f);

    cout << " A empresa est� cadastrada no SIMPLES." << endl;
    imprimeNomeCGC();
}
float Sistema::semCadastro(){
    float f = getFaturamento();
    float i = getImpostos();
    int a = 0;

    i = i*(1/2);

    setValues(i,f);

    cout << " A empresa n�o est� cadastrada no SIMPLES." << endl;
    imprimeNomeCGC();
}
Sistema::setCGC(int C){
    cgc = C;
}
float Sistema::setValues(float i, float f){
    impostos = i;
    faturamento = f;
}
string Sistema::getNome(){
    return nome;
}
Sistema::getCGC(){
    return cgc;
}
float Sistema::getImpostos(){
    return impostos;
}
float Sistema::getFaturamento(){
    return faturamento;
}
void Sistema::imprimeNomeCGC(){
    cout << " Nome : Empresa" << "  CGC: " << getCGC() << endl;
    cout <<" Valor a ser pago: R$" << getImpostos() << endl;
}
