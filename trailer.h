#ifndef PROYECTOTC1030_TRAILER_H
#define PROYECTOTC1030_TRAILER_H
#include <iostream>
#include <string>
#include "cargamento.h"

using namespace std;

class trailer
{
private:
    string placa;
    string modelo;
    string chofer;
    cargamento* carga;  // Puntero a cargamento

public:
    // Constructor
    trailer(string pl, string mo, string ch)
            : placa(pl), modelo(mo), chofer(ch), carga(nullptr)
    {}

    // Métodos de acceso
    void setPlaca(string pl) { placa = pl; }
    string getPlaca() { return placa; }

    void setModelo(string mo) { modelo = mo; }
    string getModelo() { return modelo; }

    void setChofer(string ch) { chofer = ch; }
    string getChofer() { return chofer; }

    // Método para establecer el cargamento para el trailer
    void setCargamento(cargamento* c) { carga = c; }

    // Método para obtener el cargamento del trailer
    cargamento* getCargamento() { return carga; }

    // Método para mostrar la información del trailer
    void mostrarInformacion() {
        cout << "Placa: " << getPlaca() << endl;
        cout << "Modelo: " << getModelo() << endl;
        cout << "Chofer: " << getChofer() << endl;

        if (carga != nullptr) {
            cout << "Cargamento: " << endl;
            carga->informacion();
        }
    }
};

#endif //PROYECTOTC1030_TRAILER_H
