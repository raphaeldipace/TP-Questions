#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstdlib>

using namespace std;

class Rational                   //Como foi dito no enunciado temos a classe Rational, a qual armazena as fra��es e realiza as opera��es aritm�ticas.
{
    int N1;
    int N2;
    int D1;
    int D2;

    float f1;
    float f2;

public:

    setFracao1(int, int);        //Fazemos o uso de set e get, com finalidade de facilitar as opera��es.
    setFracao2(int, int);
    float getF1();
    float getF2();

    getN1();
    getN2();
    getD1();
    getD2();

    multiplica(float, float);       //Assim como foi dito no enunciado, o m�todo multiplica recebe as duas fra��es.
    dividir(float, float);

    formato1(int, int, int);        //Imprime os n�meros Rational na forma a/b, onde a � o numerador e b � o denominador.
    formato2(float, int);           //Imprime os n�meros Rational em formato de ponto flutuante.
};

Rational::setFracao1(int n1, int d1){
    N1= n1;
    D1= d1;

    f1 = (float)n1/(float)d1;
}
Rational::setFracao2(int n2, int d2){
    N2 = n2;
    D2 = d2;

    f2 = (float)n2/(float)d2;
}
float Rational::getF1(){
     return f1;
}
float Rational::getF2(){
     return f2;
}
Rational::getN1(){
     return N1;
}
Rational::getN2(){
     return N2;
}
Rational::getD1(){
     return D1;
}
Rational::getD2(){
     return D2;
}

Rational::multiplica(float f1, float f2){

     float m, m1, m2;
     int s1, s2, s3, s4, s5, s6;
     int code = 0;                 //Apenas para identificar se � uma multiplica��o ou uma divis�o nos formatos.

     s3= getN1();
     s4= getN2();
     s5= getD1();
     s6= getD2();

     s1 = s3*s4;
     s2 = s5*s6;

     m= f1*f2;

     formato1(s1, s2, code);
     formato2(m, code);

}
Rational::dividir(float f1, float f2){
     float m, m1, m2;
     int s1, s2, s3, s4, s5, s6;
     int code = 1;

     s3= getN1();
     s4= getN2();
     s5= getD1();
     s6= getD2();

     s1 = s3*s6;
     s2 = s5*s4;

     m= f1/f2;

     formato1(s1, s2, code);
     formato2(m, code);

}
Rational::formato1(int s1, int s2, int code){
     int n1 = getN1();
     int n2 = getN2();
     int d1 = getD1();
     int d2 = getD2();

     if(code == 0){
        cout <<"\n\n Multipli��o das fra��es em formato de fra��o: " << n1 << "/" << d1 << " X " << n2 << "/" << d2 << " = " << s1 << "/" << s2 << endl;
     }
     if(code == 1){
        cout <<"\n\n Divis�o das fra��es em formato de fra��o: " << n1 << "/" << d1 << " / " << n2 << "/" << d2 << " = " << s1 << "/" << s2 << endl;
     }
}

Rational::formato2(float m, int code){
     float m1, m2;
     m1= getF1();
     m2= getF2();

     if(code == 0){
        cout <<" Multipli��o das fra��es em formato de ponto flutuante: " << m1 << " X " << m2 << " = " << m << endl;
     }
     if(code == 1){
        cout <<" Divis�o das fra��es em formato de ponto flutuante: " << m1 << " / " << m2 << " = " << m << "\n\n";
     }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int n1, d1, n2, d2;
    float f1, f2;

    Rational r;

    cout << " Informe o numerador da primeira fra��o: ";
    cin >> n1;
    cout << " Informe o denominador da primeira fra��o: ";
    cin >> d1;

    r.setFracao1(n1, d1);

    cout << " Informe o numerador da segunda fra��o: ";
    cin >> n2;
    cout << " Informe o denominador da segunda fra��o: ";
    cin >> d2;

    r.setFracao2(n2, d2);

    f1 = r.getF1();
    f2 = r.getF2();

    r.multiplica(f1, f2);
    r.dividir(f1, f2);

    system("PAUSE");
    return 0;
}
