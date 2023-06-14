#ifndef PROYECTOTC1030_CISTERNA_H
#define PROYECTOTC1030_CISTERNA_H
#include "cargamento.h"

using namespace std;

class cisterna : public cargamento
{
protected:
    string contenido;
    double peso;

public:
    cisterna(string c, string o, string r, string cont, double p)
            : cargamento(c, o, r), contenido(cont), peso(p)
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
