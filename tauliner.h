#ifndef PROYECTOTC1030_TAULINER_H
#define PROYECTOTC1030_TAULINER_H

#include "cargamento.h"

class tauliner : public cargamento
{
private:
    string contenido;
    double peso;

public:
    tauliner(string c, string o, string d, string r, string cont, double p)
            : cargamento(c, o, d, r), contenido(cont), peso(p)
    {}

    void informacion() override {
        cout << "Contenido: " << contenido << endl;
        cout << "Peso: " << peso << " Kilogramos" << endl;
    }

    void setContenido(string cont) { contenido = cont; }
    string getContenido() { return contenido; }

    void setPeso(double p) { peso = p; }
    double getPeso() { return peso; }
};

#endif // PROYECTOTC1030_TAULINER_H
