#ifndef PROYECTOTC1030_CISTERNA_H
#define PROYECTOTC1030_CISTERNA_H

#include "cargamento.h"

class cisterna : public cargamento
{
private:
    string contenido;
    double peso;

public:
    cisterna(string c, string o, string d, string r, string cont, double p)
            : cargamento(c, o, d, r), contenido(cont), peso(p)
    {}

    void informacion() override {
        cout << "Contenido: " << contenido << endl;
        cout << "Peso: " << peso << " litros" << endl;
    }

    void setContenido(string cont) { contenido = cont; }
    string getContenido() { return contenido; }

    void setPeso(double p) { peso = p; }
    double getPeso() { return peso; }
};

#endif // PROYECTOTC1030_CISTERNA_H
