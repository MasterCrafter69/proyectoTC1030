#ifndef PROYECTOTC1030_CAJA_FRIA_H
#define PROYECTOTC1030_CAJA_FRIA_H

#include "cargamento.h"

class caja_fria : public cargamento
{
private:
    string contenido;
    double peso;
    double temperatura;

public:
    caja_fria(string c, string o, string d, string r, string cont, double p, double temp)
            : cargamento(c, o, d, r), contenido(cont), peso(p), temperatura(temp)
    {}

    void informacion() override {
        cout << "Contenido: " << contenido << endl;
        cout << "Peso: " << peso << " Kilogramos" << endl;
        cout << "Temperatura: " << temperatura << " °C" << endl;
    }

    void setContenido(string cont) { contenido = cont; }
    string getContenido() { return contenido; }

    void setPeso(double p) { peso = p; }
    double getPeso() { return peso; }

    void setTemperatura(double temp) { temperatura = temp; }
    double getTemperatura() { return temperatura; }
};

#endif // PROYECTOTC1030_CAJA_FRIA_H
