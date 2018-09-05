#include "bicipuerto.h"

Bicipuerto::Bicipuerto()
{
    cont = 0;
}

void Bicipuerto::agregarBici(Bici &bici)
{
    if (cont < 50) {
        bicis[cont++] = bici;
    }
    else {
        cout << "Bicipuerto lleno" << endl;
    }
}

void Bicipuerto::mostrar()
{
    for (int i = 0; i < cont; ++i) {
        Bici &bici = bicis[i];

        cout << i + 1 << ". "
             << bici.getId() << "-"
             << bici.getMetros() << "-"
             << bici.getTiempo() << endl;
    }
}
