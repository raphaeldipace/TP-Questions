#include "Usuario.h"

#ifndef PROFESSOR_H
#define PROFESSOR_H

class Professor : public Usuario{
protected:
    string departamento;
    int sala;
public:
    Professor(void);
    setProfessor();
    string getDepartamento();
    int getSala();
    string getNome();
    string getEmail();
    int getIdade();
    void print();
};

#endif
