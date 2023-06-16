#ifndef PROYECTOTC1030_TRAILER_H
#define PROYECTOTC1030_TRAILER_H

#include <iostream>
#include <string>

using namespace std;

class trailer
{
private:
    string placa;
    string modelo;
    string chofer;

public:
    // Constructor
    trailer(string pl, string mo, string ch)
            : placa(pl), modelo(mo), chofer(ch)
    {}

    // Métodos de acceso
    void setPlaca(string pl) { placa = pl; }
    string getPlaca() { return placa; }

    void setModelo(string mo) { modelo = mo; }
    string getModelo() { return modelo; }

    void setChofer(string ch) { chofer = ch; }
    string getChofer() { return chofer; }

    // Método para mostrar la información del trailer
    void mostrarInformacion() {
        cout << "Placa: " << getPlaca() << endl;
        cout << "Modelo: " << getModelo() << endl;
        cout << "Chofer: " << getChofer() << endl;
    }
};

#endif //PROYECTOTC1030_TRAILER_H
