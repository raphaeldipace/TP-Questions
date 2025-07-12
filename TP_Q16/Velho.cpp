#include <math.h>
#include "Velho.h"


velho::setAddress(string a){
    address = a;
}
velho::setPrice(float p){
    price = p;
}
string velho::getAddress(){
    return address;
}
float velho::getPrice(){
    return price;
}
float velho::desconto(){
    float p;
    float porcentagem = 0.2;        //Desconto de 20%.

    p = getPrice();

    p = p - p*porcentagem;

    setPrice(p);
    Imprimir();
}
void velho::Imprimir(){

    cout << "\n\n Endereço:  " << getAddress() << endl;
    cout << " Preço a pagar:  R$" << getPrice() << endl;
}
