#include "Produto1.h"
#include <math.h>

Produto1::setValues(){
    price = 4500;
    nome = "Produto 1";
    estoque = 5;
    desc = 20;
};
bool Produto1::verifEstoque(int e){
    bool b = true;

    if(estoque>=1){
        b = true;
        calc(b);
    }
    if(estoque<=0){
        b = false;
        calc(b);
    }
}
float Produto1::setPrice(float p){
    price = p;
}
float Produto1::getPrice(){
    return price;
}
int Produto1::getEstoque(){
    return estoque;
}
float Produto1::getDesc(){
    return desc;
}
string Produto1::getNome(){
    return nome;
}
float Produto1::calc(bool b){
    float p, d;
    p = getPrice();
    d = getDesc();

    d = d/100;

    p = p - p*d;

    if(b== true){
       setPrice(p);
       imprime();
    }
    if(b== false){
        cout << " Produto indisponível!";
    }
}
void Produto1::imprime(){
    cout << " Nome: " << getNome() << endl;
    cout << " Preço: R$" << getPrice() << "  Estoque: " << getEstoque() << endl;
}
