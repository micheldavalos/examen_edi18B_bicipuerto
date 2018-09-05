#ifndef BICIPUERTO_H
#define BICIPUERTO_H

#include "bici.h"

class Bicipuerto
{
public:
    Bicipuerto();
    void agregarBici(Bici &bici);
    void mostrar();

private:
    Bici bicis[50];
    int cont;
};

#endif // BICIPUERTO_H
