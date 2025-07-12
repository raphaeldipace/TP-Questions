#include "TPQ12.h"
#include <math.h>

Ar_condicionado::setPotencias(int p1, int p2){
    potencia1 = p1;
    potencia2 = p2;
}
Ar_condicionado::setTemperaturaExterna(float t1, float t2){
    temperatura1 = t1;
    temperatura2 = t2;
}
Ar_condicionado::getPot1(){
    return potencia1;
}
Ar_condicionado::getT1(){
    return temperatura1;
}
Ar_condicionado::getPot2(){
    return potencia2;
}
Ar_condicionado::getT2(){
    return temperatura2;
}
float Ar_condicionado::TemperaturaResultante(){
    float tre1, tre2;
    int p1, p2;

    p1 = getPot1();
    p2 = getPot2();

    p1 = p1*(1.8);
    p2 = p2*(1.8);

    tre1 = getT1();
    tre2 = getT2();

    tre1 = tre1 - (float)p1;
    tre2 = tre2 - (float)p2;

    Resultado(tre1, tre2);
}
void Ar_condicionado::Resultado(float tre1, float tre2){

    cout << "\n\n A temperatura resultante para o primeiro ar-condicionado é de " << tre1 << "°C" <<endl;

    cout << " A temperatura resultante para o segundo ar-condicionado é de " << tre2 << "°C\n\n";
}
