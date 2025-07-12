#include "Produto.h"

#ifndef PRODUTO2_H
#define PRODUTO2_H

class Produto2 : public Produto{
public:
    setValues();
    bool verifEstoque(int);
    float setPrice(float);
    float getDesc();
    float getPrice();
    int getEstoque();
    string getNome();

    float calc(bool);
    void imprime();
};
#endif
