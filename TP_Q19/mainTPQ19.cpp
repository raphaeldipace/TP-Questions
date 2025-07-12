#include <iostream>
#include <iomanip>
#include <locale.h>
#include <cstdlib>
#include <string.h>
#include <math.h>

using namespace std;

#include "Usuario.cpp"
#include "Aluno.cpp"
#include "Professor.cpp"

int main(){
    setlocale(LC_ALL,"Portuguese");
    int o;

    Usuario u;
    Aluno a;
    Professor p;

    u.setValues();

    cout << " 1- Aluno        2- Professor\n ";
    cin >> o;

    if(o==1){
            a.setAluno();
    }
    if(o==2){
            p.setProfessor();
    }

    system("PAUSE");
    return 0;
}
