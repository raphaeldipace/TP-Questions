#ifndef TPQ12_H
#define TPQ12_H

class Ar_condicionado
{
    int potencia1;
    int potencia2;
    float temperatura1, temperatura2;

public:

    setPotencias(int, int);
    setTemperaturaExterna(float, float);
    getPot1();
    getT1();
    getPot2();
    getT2();

    float TemperaturaResultante();
    void Resultado(float, float);
};
#endif
