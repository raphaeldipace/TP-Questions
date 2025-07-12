#include "Produto2.h"

Produto2::setValues(){
    price = 3500;
    nome = "Produto 2";
    estoque = 3;
    desc = 35;
};
bool Produto2::verifEstoque(int es){
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
float Produto2::setPrice(float p){
    price = p;
}
float Produto2::getPrice(){
    return price;
}
int Produto2::getEstoque(){
    return estoque;
}
float Produto2::getDesc(){
    return desc;
}
string Produto2::getNome(){
    return nome;
}
float Produto2::calc(bool b){
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
void Produto2::imprime(){
    cout << " Nome: " << getNome() << endl;
    cout << " Preço: R$" << getPrice() << "  Estoque: " << getEstoque() << endl;
}
