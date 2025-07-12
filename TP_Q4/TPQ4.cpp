#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

class Retangulo{

	int pix,piy,psx, psy;

	bool checar(int,int,int,int);

  public:

  	setValores(int, int, int, int);

    int comprimento();

	int largura();

	int perimetro();

	int area();

	bool ehquadrado();

};

Retangulo::setValores(int x1, int y1, int x2, int y2)
{
    pix = x1;
    piy = y1;
    psx = x2;
    psy = y2;

    checar(pix,piy,psx,psy);
}

bool Retangulo::checar (int pix,int piy,int psx,int psy)
{
  bool b = true;

 if((pix<0)||(piy<0)||(psx<0)||(psy<0)||(pix>15)||(piy>15)||(psx>15)||(psy>15)){

  cout << "\n\n Todas as coordenadas devem pertencer ao primeiro quadrante e serem menores do que 15!\n\n" << endl;
  b= false;
 }
 else {
    comprimento();
 }
  return b;
}

int Retangulo::comprimento(){
  int c1, c2, x;
  c1 = psx - pix;
  c2 = psy - piy;

  if(c1>=c2){
    x = c1;
  }
  if(c2>=c1){
    x = c2;
  }
  if(x<0){
    x= x*(-1);
  }
  cout << "\n\n O comprimento: "<< x << endl;
  largura();
}

int Retangulo::largura(){
  int l1, l2, x1;

  l1 = psx - pix;
  l2 = psy - piy;

  if(l1>=l2){
    x1 = l2;
  }
  if(l2>=l1){
    x1 = l1;
  }
  if(x1<0){
    x1= x1*(-1);
  }
  cout << " A largura: "<< x1 << endl;
  perimetro();
}

int Retangulo::perimetro()
{
    int p, d1, d2;
    d1 = psx - pix;
    d2 = psy - piy;

    if(d1<0){
    d1= d1*(-1);
    }
    if(d2<0){
    d2= d2*(-1);
    }

    p = 2*d1;
    p = p + 2*d2;

    cout << " O per�metro: "<< p << endl;
    area();
}

int Retangulo::area(){
    int a, d1, d2;
    d1 = (psx - pix);
    d2 = (psy - piy);

    if(d1<0){
    d1= d1*(-1);
    }
    if(d2<0){
    d2= d2*(-1);
    }

    a = d1*d2;

    cout << " A �rea: "<< a << endl;
    ehquadrado();
}

bool Retangulo::ehquadrado()
{
      int d1, d2;
      bool b = true;

      d1 = (psx - pix);
      d2 = (psy - piy);

      if(d1*d2 == 0){
        b = false;     // Caso todas as suas coordenadas sejam nulas, n�o ser� um quadrado.
      }
      if(d1!=d2){
        cout << " O ret�ngulo n�o � quadrado.\n\n" << endl;
        b = false;
      }
      if((d1==d2)&&(d1*d2 != 0)){
        cout << " O ret�ngulo � quadrado.\n\n" << endl;
      }
      return b;
}

int main ()
{
    int x1, y1, x2, y2;
    Retangulo r;

    setlocale(LC_ALL, "Portuguese");

    cout << "   C�lculo da �rea e per�metro de um ret�ngulo\n\n";

    cout <<"  Informe a coordenada X do primeiro ponto: ";
    cin >> x1;
    cout <<"  Informe a coordenada Y do primeiro ponto: ";
    cin >> y1;
    cout <<"  Informe a coordenada X do segundo ponto: ";
    cin >> x2;
    cout <<"  Informe a coordenada Y do segundo ponto: ";
    cin >> y2;

    r.setValores(x1,y1,x2,y2);

    system("PAUSE");
    return 0;
}
