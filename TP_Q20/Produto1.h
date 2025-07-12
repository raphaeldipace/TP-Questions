#include "Produto.h"

#ifndef PRODUTO1_H
#define PRODUTO1_H

class Produto1 : public Produto{
public:
    setValues();
    bool verifEstoque(int);      //Dependendo do estoque, verifica se h� produto dispon�vel ou n�o.
                              //E esse m�todo � tamb�m aplicado para o segundo produto assim como est� dito no enunciado.

    float setPrice(float);
    float getDesc();
    float getPrice();
    int getEstoque();
    string getNome();

    float calc(bool);
    void imprime();
};
#endif
