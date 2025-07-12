#include "TPQ13.h"
#include <math.h>

float ContaDePoupanca::taxaDeJurosAnual=0;

ContaDePoupanca::setSaldos(float s1, float s2){
    saldoDaPoupanca1 = s1;
    saldoDaPoupanca2 = s2;
}
ContaDePoupanca::modifiqueTaxaDeJuros(float T){
    ContaDePoupanca::taxaDeJurosAnual = T;
}
ContaDePoupanca::getTaxa(){
    return taxaDeJurosAnual;
}
float ContaDePoupanca::getS1(){
    return saldoDaPoupanca1;
}
float ContaDePoupanca::getS2(){
    return saldoDaPoupanca2;
}
float ContaDePoupanca::calculeRendimentoMensal(){

    float taxa, s1, s2;
    float R1, R2;

    taxa = getTaxa();
    taxa = taxa/100;

    s1= getS1();
    s2= getS2();

    R1= s1*(taxa/12);
    R2= s2*(taxa/12);

    s1= R1 + s1;
    s2= R2 + s2;

    setSaldos((float)s1,(float)s2);
}
void ContaDePoupanca::imprime(){

    float s1, s2;

    s1 = getS1();
    s2 = getS2();

    std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    std::cout << "\n\n Saldo do primeiro poupador: R$" << s1 << "    Saldo do segundo poupador: R$" << s2 << endl;
}
