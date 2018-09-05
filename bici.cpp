#include "bici.h"

Bici::Bici()
{

}

string Bici::getId() const
{
    return id;
}

void Bici::setId(const string &value)
{
    id = value;
}

double Bici::getTiempo() const
{
    return tiempo;
}

void Bici::setTiempo(double value)
{
    tiempo = value;
}

double Bici::getMetros() const
{
    return metros;
}

void Bici::setMetros(double value)
{
    metros = value;
}
