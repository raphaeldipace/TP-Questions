#ifndef TPQ15_H
#define TPQ15_H

class listaNome{

    string nome;

public:
    setNome(string);
    string getNome();
};

class Lista{

    listaNome *nomes;
    unsigned num;

public:

    Lista(int);               //Construtor
    void addNome(listaNome);
    void printLista();

    ~Lista();                 //Destrutor
};

#endif
