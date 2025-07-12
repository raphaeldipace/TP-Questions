#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

class Televisao
{
    int vol;
    int channel;

public:

    setVol(int);
    getVol();
    setChannel(int);
    getChannel();

    Menu();                   //Menu para selecionar as op��es do usu�rio.

    int AumentarVol();        //M�todo para Aumentar volume.
    int DiminuirVol();        //M�todo para diminuir volume.
    int TrocarCanal();        //M�todo para trocar de canal.
    void Informar();          //M�todo para informar volume e canal.
};

Televisao::setVol(int i){
     vol=i;
}
Televisao::setChannel(int j){
     channel=j;
}
Televisao::getVol(){
     return vol;
}
Televisao::getChannel(){
     return channel;
}


int Televisao::AumentarVol(){
    int i = getVol();
    int s;

    cout << " Digite quantas unidades deseja para aumentar"<<endl;
    cin >> s;
    if(s<0){
    s= s*(-1);
    }
    i= i+s;
    if(i>100){
    i=100;
    }
    setVol(i);
}
int Televisao::DiminuirVol(){
    int i = getVol();
    int s;

    cout << " Digite quantas unidades deseja para reduzir"<<endl;
    cin >> s;
    if(s<0){
    s= s*(-1);
    }
    i= i-s;
    if(i<0){
    i=0;
    }
    setVol(i);
}
int Televisao::TrocarCanal(){
    int choice;
    int i = getChannel();
    int s;

    cout << " 1-Aumentar n�mero do canal  2-Diminuir o n�mero do canal" << endl;
    cin  >> choice;
        if(choice == 1){
            cout << " Digite quantas unidades deseja para aumentar"<<endl;
            cin >> s;
            if(s<0){
            s= s*(-1);
            }
            i= i+s;
            if(i>100){
            i=100;
            }
        }
        if(choice == 2){
            cout << " Digite quantas unidades deseja para reduzir"<<endl;
            cin >> s;
            if(s<0){
            s= s*(-1);
            }
            i= i-s;
            if(i<=0){
            i=1;
            }
        }
        setChannel(i);
}

void Televisao::Informar(){

    cout << "  Volume: " << getVol() << "  Canal: " << getChannel() << endl;

}

Televisao::Menu(){
    int menu, choice;

    cout << "\n\n  Menu   \n\n";
    Informar();
    cout << "\n\n  1-Alterar volume   2- Trocar canal   3- Sair"<<endl;
    cin >> menu;

    if(menu == 1){
       cout << " 1-Aumentar volume  2-Diminuir volume" << endl;
       cin  >> choice;
       if(choice == 1){
        AumentarVol();
       }
       if(choice == 2){
        DiminuirVol();
       }
     }
    if(menu == 2){
        TrocarCanal();
    }
    if(menu == 3){
        return 0;
    }
    return Menu();
}

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i=0, j=1;                  //O default possui os valores m�nimos do volume e o n�mero do canal.
    Televisao televisao;


    televisao.setVol(i);
    televisao.setChannel(j);
    televisao.Menu();

    system("PAUSE");
    return 0;
}
