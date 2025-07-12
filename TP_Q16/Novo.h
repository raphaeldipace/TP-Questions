#include "Imovel.h"

#ifndef NOVO_H
#define NOVO_H

class novo : public Imovel{
  public:
      float aumento();
      void Imprimir();
      float getPrice();
      string getAddress();
      setAddress(string);
      setPrice(float);
};

#endif
