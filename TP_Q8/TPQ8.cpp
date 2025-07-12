#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

class Elevador
{
    int andar;               //Andar atual
    int andares;             //Andares no pr�dio
    int capacidade;          //Capacidade do elevador
    int pessoas;             //N�mero de pessoas

public:

    setAndar(int);
    getAndar();
    setAndares(int);
    getAndares();
    setCapacidade(int);
    getCapacidade();
    setPessoas(int);
    getPessoas();

    Menu();
    void Inicializa();
    entra();
    sai();
    sobe();
    desce();
};

Elevador::setAndar(int a){
     andar = a;
}
Elevador::setAndares(int s){
    andares = s;
}
Elevador::setCapacidade(int c){
    capacidade = c;
}
Elevador::setPessoas(int p){
    pessoas = p;
}
Elevador::getAndar(){
     return andar;
}
Elevador::getAndares(){
     return andares;
}
Elevador::getCapacidade(){
     return capacidade;
}
Elevador::getPessoas(){
     return pessoas;
}

void Elevador::Inicializa(){
    int c, s;
    int choice;

    cout << " Digite o limite m�ximo de pessoas no elevador: ";
    cin >> c;
    setCapacidade(c);
    cout << " Digite o total de andares do pr�dio: ";
    cin >> s;
    setAndares(s);

    Menu();
}

Elevador::Menu(){
    int choice;
    cout <<" Andar: "<< getAndar() << "  N�mero de pessoas: "<< getPessoas() << endl;
    cout << " 1- Entrar  2- Retirar  3- Subir  4- Descer  5-Finalizar" << endl;
    cin >> choice;

    if(choice == 1){
        entra();
    }
    if(choice == 2){
        sai();
    }
    if(choice == 3){
        sobe();
    }
    if(choice == 4){
        desce();
    }
    if(choice == 5){
        return 0;
    }
    return Menu();
}

Elevador::entra(){
    int p = getPessoas();
    int c = getCapacidade();

    p=p+1;

    if(p>c){
       cout <<" N�o � poss�vel acrescentar mais uma pessoa no elevador!"<<endl;
    } else {
       setPessoas(p);
    }
}

Elevador::sai(){
    int p = getPessoas();
    int c = getCapacidade();

    if(p==0){
       cout <<" N�o � poss�vel retirar pessoas no elevador!"<<endl;
    } else {
       p=p-1;
       setPessoas(p);
    }
}

Elevador::sobe(){
    int a= getAndar();
    int l= getAndares();

    if(a==l){
       cout <<" N�o � poss�vel subir mais!"<<endl;
    } else {
       a= a+1;
       setAndar(a);
    }
}

Elevador::desce(){
    int a= getAndar();
    int l= getAndares();

    if(a==0){
       cout <<" N�o � poss�vel descer mais!"<<endl;
    } else {
        a= a-1;
        setAndar(a);
    }
}
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a= 0, p= 0;
    Elevador elevador;

    elevador.setAndar(a);
    elevador.setPessoas(p);

    elevador.Inicializa();

    system("PAUSE");
    return 0;
}
