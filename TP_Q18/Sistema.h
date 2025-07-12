#include "Empresa.h"

#ifndef SISTEMA_H
#define SISTEMA_H

class Sistema : public empresa{
public:
    float cadastro();
    float semCadastro();

    setCGC(int);
    float setValues(float, float);
    string getNome();
    getCGC();
    float getFaturamento();
    float getImpostos();
    void imprimeNomeCGC();
};

#endif
