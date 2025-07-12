#ifndef TPQ13_H
#define TPQ13_H

class ContaDePoupanca
{
    float saldoDaPoupanca1;
    float saldoDaPoupanca2;
    static float taxaDeJurosAnual;

public:

    setSaldos(float, float);
    modifiqueTaxaDeJuros(float);
    getTaxa();

    float getS1();
    float getS2();

    float calculeRendimentoMensal();
    void imprime();
};

#endif
