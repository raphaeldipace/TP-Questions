#ifndef PESSOA_H
#define PESSOA_H

class Pessoa{
protected:
  string nome;
  long int CPF;

public:

    Pessoa(void);
    void setNome(string);
    void setCPF(long int);
    imprimeNomeCPF(void);

};

#endif
