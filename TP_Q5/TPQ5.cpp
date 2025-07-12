#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

class Pessoa
{
    string Nome;
    int Idade;
    float Altura;
    float Peso;
    int Sexo;

public:
    setAtributos(string , int, float, float, int);
    string Name();
    float IMC();
    void Categoria(float);
};

Pessoa::setAtributos(string name, int i, float h, float k, int s)
{
    Nome = name;
    Idade = i;
    Altura = h;
    Peso = k;
    Sexo = s;

    Name();
}

string Pessoa::Name()
{
    cout <<"\n\n Nome: " << Nome << endl;
    if(Sexo==1){
            cout <<" Sexo masculino" << endl;
    }
    if(Sexo==2) {
            cout <<" Sexo feminino" << endl;
    }
    IMC();
}

float Pessoa::IMC()
{
    int im;

    im= Peso/((Altura)*(Altura));

    Categoria(im);
}

void Pessoa::Categoria(float im)
{
    cout << " IMC: " << im << endl;
    if(im<=18.5){
     cout << " Abaixo do peso normal\n\n";
    }
    if((im<=25)&&(im>18.5)){
     cout << " Peso normal\n\n";
    }
    if((im<=30)&&(im>25)){
     cout << " Acima do peso normal\n\n";
    }
    if(im>30){
     cout << " Obesidade\n\n";
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Pessoa p;
    string name;
    float h, k;
    int i, s;
    
    system("cls");
    cout << "  Digite o seu nome: ";
    getline(cin, name);
    cout << "  Digite a sua altura em metros: ";
    cin >> h;
    cout << "  Digite a sua idade em anos: ";
    cin >> i;
    cout << "  Digite o seu peso em kg: ";
    cin >> k;
    cout << "  Qual � o seu sexo? 1- Masculino 2-Feminino  ";
    cin >> s;

    if((s==1)||(s==2)){
         p.setAtributos(name, i, h, k, s);
    }
    if((s!=1)||(s!=2)){
        cout << " Apenas inteiros iguais a 1 ou 2!" << endl;
    }

    system("PAUSE");
    return 0;
}
