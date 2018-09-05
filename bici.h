#ifndef BICI_H
#define BICI_H

#include <iostream>
using namespace std;

class Bici
{
public:
    Bici();

    string getId() const;
    void setId(const string &value);

    double getTiempo() const;
    void setTiempo(double value);

    double getMetros() const;
    void setMetros(double value);

private:
    string id;
    double tiempo;
    double metros;

};

#endif // BICI_H
