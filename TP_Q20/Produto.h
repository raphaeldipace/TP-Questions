#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
protected:
    string nome;
    float price;     //Preço
    int estoque;     //estoque
    float desc;      //Desconto
public:
    Produto(void);
};
#endif
