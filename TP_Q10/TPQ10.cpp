#include "TPQ10.h"

//Especificação da classe Rational.

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
     int code = 0;                 //Apenas para identificar se é uma multiplicação ou uma divisão nos formatos.

     s3 = getN1();
     s4 = getN2();
     s5 = getD1();
     s6 = getD2();

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

     s3 = getN1();
     s4 = getN2();
     s5 = getD1();
     s6 = getD2();

     s1 = s3*s6;
     s2 = s5*s4;

     m = f1/f2;

     formato1(s1, s2, code);
     formato2(m, code);

}
Rational::formato1(int s1, int s2, int code){
     int n1 = getN1();
     int n2 = getN2();
     int d1 = getD1();
     int d2 = getD2();

     if(code == 0){
        cout <<"\n\n Multiplição das frações em formato de fração: " << n1 << "/" << d1 << " X " << n2 << "/" << d2 << " = " << s1 << "/" << s2 << endl;
     }
     if(code == 1){
        cout <<"\n\n Divisão das frações em formato de fração: " << n1 << "/" << d1 << " / " << n2 << "/" << d2 << " = " << s1 << "/" << s2 << endl;
     }
}

Rational::formato2(float m, int code){
     float m1, m2;
     m1 = getF1();
     m2 = getF2();

     if(code == 0){
        cout <<" Multiplição das frações em formato de ponto flutuante: " << m1 << " X " << m2 << " = " << m << endl;
     }
     if(code == 1){
        cout <<" Divisão das frações em formato de ponto flutuante: " << m1 << " / " << m2 << " = " << m << "\n\n";
     }
}
