#include "Imovel.h"

#ifndef VELHO_H
#define VELHO_H

class velho : public Imovel{

  public:
      float desconto();
      void Imprimir();
      float getPrice();
      string getAddress();
      setAddress(string);
      setPrice(float);
};

#endif
