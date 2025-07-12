#ifndef TPQ14_H
#define TPQ14_H

class funcionario
{
    int dia, mes, ano;
    string Nome;
    float salario;
    int departamento;

public:

    Data(int = 1, int = 1, int = 2020); //Construtor default
    float setSalario(float);
    getDia();
    getMes();
    getAno();
    setNomeFuncionario(string);
    string getNomeFuncionario();

    void addFunc(int);
    void setDep(int);
	int getDep();

    float getSalario();
    void imprimeData();
};
class Lista{
    funcionario *funcionarios;
    unsigned num;

public:

    Lista(int);               //Construtor
    void addFunc(funcionario);
    void imprimeFolha();
    float valorFolha();
    string MaiorSalario();
    void mostraPorDep(int);

    float aumentarSalario();        //Calcula o aumento de salário
    float setAumento(float, int);   //Altera o salário de acordo com o aumento.


    ~Lista();   //Destrutor
};

class Empresa
{
    string nome;
    string CNPJ;

public:

    setCNPJ(string);
    string getCNPJ();

    setNome(string);

    void imprimeNome();
    void imprimeCNPJ();

    string getNome();
};
#endif
