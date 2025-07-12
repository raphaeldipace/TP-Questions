#include <iostream>
#include <locale.h>

using namespace std;

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    enum disciplinas { AlgebraLinearI = 1 , Quimica, CalculoII, FisicaGeralII, FisicaExperimentalI, TecnicasDeProgramacao};

    //Inicializando cada mat�ria com os seus respectivos valores.

    cout << " Mat�rias: \n\n";
    cout << AlgebraLinearI << " - �lgebra Linear I" << endl;
    cout << Quimica << " - Qu�mica" << endl;
    cout << CalculoII << " - C�lculo II" << endl;
    cout << FisicaGeralII << " - F�sica Geral II" << endl;
    cout << FisicaExperimentalI << " - F�sica Experimental II" << endl;
    cout << TecnicasDeProgramacao << " - T�cnicas De Programa��o\n" << endl;

    system("PAUSE");
    return 0;
}
