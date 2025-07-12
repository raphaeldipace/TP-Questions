#include "Pessoa.h"

#ifndef EMPREGADO_H
#define EMPREGADO_H

class Empregado : public Pessoa {
    float salarioBase;
    float IR;
    int numeroSecao;
public:
    float setSalario(float);
    float setIR(float);
    int setNS(int);
    float getIR();
    int getNS();
    float getSalario();
    calcularSalario();
    Imprime(float);

};


#endif
