#include <math.h>
#include "Novo.h"


novo::setAddress(string a){
    address = a;
}
novo::setPrice(float p){
    price = p;
}
string novo::getAddress(){
    return address;
}
float novo::getPrice(){
    return price;
}
float novo::aumento(){
    float p;
    float porcentagem = 0.2;        //Aumento de 20%.
    p = getPrice();

    p = p + p*porcentagem;

    setPrice(p);
    Imprimir();
}
void novo::Imprimir(){
    cout << "\n\n Endereço: " << getAddress() << endl;
    cout << " Preço a pagar: " << getPrice() << endl;
}
