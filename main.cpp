#include <iostream>
#include "bicipuerto.h"
using namespace std;

int main()
{
    Bicipuerto bicipuerto;
    string op;

    while (true) {
        cout << "1) Agregar bici" << endl;
        cout << "2) Mostrar bicis" << endl;
        cout << "0) Salir" << endl;

        getline(cin, op);

        if (op == "1") {
            Bici bici;
            string temp;
            double temp_d;

            cout << "id: ";
            getline(cin, temp);
            bici.setId(temp);

            cout << "tiempo: ";
            getline(cin, temp);
            temp_d = stod(temp);
            bici.setTiempo(temp_d);

            cout << "metros: ";
            getline(cin, temp);
            temp_d = stod(temp);
            bici.setMetros(temp_d);

            bicipuerto.agregarBici(bici);
        }
        else if (op == "2") {
            bicipuerto.mostrar();
        }
        else if (op == "0") {
            break;
        }
    }
    return 0;
}
