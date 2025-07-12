#include "Usuario.h"

#ifndef ALUNO_H
#define ALUNO_H

class Aluno : public Usuario{
protected:
    string numeroMatricula;
    string curso;
public:
    Aluno(void);
    setAluno();
    string getMatricula();
    string getCurso();
    string getNome();
    string getEmail();
    int getIdade();
    void print();
};

#endif
