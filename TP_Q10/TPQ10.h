#ifndef TPQ10_H
#define TPQ10_H

class Rational                   //Como foi dito no enunciado temos a classe Rational, a qual armazena as frações e realiza as operações aritméticas.
{
    int N1;
    int N2;
    int D1;
    int D2;

    float f1;
    float f2;

public:

    setFracao1(int, int);        //Fazemos o uso de set e get, com finalidade de facilitar as operações.
    setFracao2(int, int);
    float getF1();
    float getF2();

    getN1();
    getN2();
    getD1();
    getD2();

    multiplica(float, float);       //Assim como foi dito no enunciado, o método multiplica recebe as duas frações.
    dividir(float, float);

    formato1(int, int, int);        //Imprime os números Rational na forma a/b, onde a é o numerador e b é o denominador.
    formato2(float, int);           //Imprime os números Rational em formato de ponto flutuante.
};

#endif
