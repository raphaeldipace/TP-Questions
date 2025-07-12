#include "TPQ14.h"
#include <math.h>

funcionario::Data(int d, int m, int a){
    dia = d;
    mes = m;
    ano = a;
}
funcionario::setNomeFuncionario(string nomef){
    Nome = nomef;
}
string funcionario::getNomeFuncionario(){
    return Nome;
}
float funcionario::setSalario(float sl){
    salario = sl;
}
funcionario::getDia(){
    return dia;
}
funcionario::getMes(){
    return mes;
}
funcionario::getAno(){
    return ano;
}
float funcionario::getSalario(){
    return salario;
}
void funcionario::setDep(int dep){
    departamento = dep;
}
int funcionario::getDep(){
    return departamento;
}
void funcionario::imprimeData(){
    cout << " Data de admissão: " << getDia() << "/" << getMes() << "/" << getAno() << endl;
}


Lista::Lista(int n){
    funcionarios = new funcionario[n];
    num = 0;
}
void Lista::addFunc(funcionario f){
        funcionarios[num] = f;
        num++;
}
float Lista::valorFolha(){
    float soma = 0;
    for(unsigned i = 0; i < num; i++)
        soma += funcionarios[i].getSalario();
    return soma;
}
string Lista::MaiorSalario(){
    int maiorpos = 0;
    float maiorSalario = funcionarios[0].getSalario();
    for(unsigned i = 1; i < num; i++)
        if(funcionarios[i].getSalario() > maiorSalario){
            maiorpos = i;
            maiorSalario = funcionarios[i].getSalario();
        }
    return funcionarios[maiorpos].getNomeFuncionario();
}
void Lista::mostraPorDep(int d){
    for(unsigned i = 0; i < num; i++)
        if(funcionarios[i].getDep() == d)
            cout << "====================Departamento=====================" << endl
                 << "Nome: " << funcionarios[i].getNomeFuncionario() << endl;
}
float Lista::aumentarSalario(){
    int d;
    float p, sAumento, sl;

    cout << " Digite o departamento para aumentar o salário: ";
    cin >> d;
    cout << " Informe a % de aumento de salário: ";
    cin >> p;

    p = (p/100);

    for(unsigned i = 0; i < num; i++)
        if(funcionarios[i].getDep() == d)
            sAumento = funcionarios[i].getSalario();
            sAumento = sAumento +(p*sAumento);
            sl = sAumento;
            setAumento(sl, d);


}
float Lista::setAumento(float sl, int d){
     for(unsigned i = 0; i < num; i++)
        if(funcionarios[i].getDep() == d)
            funcionarios[i].setSalario(sl);
}
void Lista::imprimeFolha(){
    for(unsigned i = 0; i < num; i++){
        cout << "======================Funcionário===================" << endl;
        cout << "Nome: " << funcionarios[i].getNomeFuncionario() << endl;
        cout << "Salário: R$" << funcionarios[i].getSalario() << endl;
    }
}
Lista::~Lista(){
    delete []funcionarios;
}

Empresa::setNome(string name){
    nome = name;
}
string Empresa::getNome(){
    return nome;
}
Empresa::setCNPJ(string c){
    CNPJ = c;
}
string Empresa::getCNPJ(){
    return CNPJ;
}
void Empresa::imprimeNome(){
    cout << "\n\n Nome da empresa: " << getNome();
}
void Empresa::imprimeCNPJ(){
    cout << "   CNPJ: " << getCNPJ() << endl;
}
