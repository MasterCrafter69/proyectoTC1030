#ifndef PROYECTOTC1030_CISTERNA_H
#define PROYECTOTC1030_CISTERNA_H
#include "Cargamento.h"

using namespace std;

class Cisterna : public Cargamento
{
protected:
    string contenido;
    double peso;

public:
    Cisterna(string c, string o, string r, string cont, double p)
            : Cargamento(c, o, r), contenido(cont), peso(p)
    {}

    void informacion() override {
        cout << "Cliente: " << getCliente() << endl;
        cout << "Origen: " << getOrigen() << endl;
        cout << "Remolques: " << getRemolques() << endl;
        cout << "Contenido: " << contenido << endl;
        cout << "Peso: " << peso << " litros" << endl;
    }

    void setContenido(string cont) { contenido = cont; }
    string getContenido() { return contenido; }

    void setPeso(double p) { peso = p; }
    double getPeso() { return peso; }
};

#endif //PROYECTOTC1030_CISTERNA_H
