#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

struct Ponto{
    int x;
    int y;
};

void definir_pontos(struct Ponto *p, char *s);
float distancia_entre_os_pontos(struct Ponto p1, Ponto p2);

int main (void)
{
    setlocale(LC_ALL, "Portuguese");
    cout << " C�lculo de dist�ncia entre dois pontos \n" << endl;
    struct Ponto p1;
    struct Ponto p2;

    definir_pontos(&p1, "primeiro ponto");
    definir_pontos(&p2, "segundo ponto");


    //Imprimindo a dist�ncia com uma precis�o de duas casas decimais:

    cout << fixed;
    cout.precision(2);

    cout << " A dist�ncia entre os pontos �: " << distancia_entre_os_pontos(p1,p2) << endl << endl;

 
    system("pause");
    return 0;
}
void definir_pontos(struct Ponto *p, char*s)
{
    int x, y;
    cout <<  "Informe a coordenada X do " << s << ":" << endl;
    cin >> x;
    cout <<  "Informe a coordenada y do " << s << ":" << endl;
    cin >> y;

    p->x = x;
    p->y = y;

}
float distancia_entre_os_pontos(struct Ponto p1, Ponto p2)
{
    float r1, r2;
    r1 = pow((p1.x-p2.x), 2);
    r2 = pow((p1.y-p2.y), 2);
    return sqrt( r1 + r2);
}




