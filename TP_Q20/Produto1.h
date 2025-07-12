#include "Produto.h"

#ifndef PRODUTO1_H
#define PRODUTO1_H

class Produto1 : public Produto{
public:
    setValues();
    bool verifEstoque(int);      //Dependendo do estoque, verifica se há produto disponível ou não.
                              //E esse método é também aplicado para o segundo produto assim como está dito no enunciado.

    float setPrice(float);
    float getDesc();
    float getPrice();
    int getEstoque();
    string getNome();

    float calc(bool);
    void imprime();
};
#endif
