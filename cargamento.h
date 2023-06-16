#ifndef PROYECTOTC1030_CARGAMENTO_H
#define PROYECTOTC1030_CARGAMENTO_H

#include <iostream>
#include <string>

using namespace std;

class cargamento
{
protected:
    string cliente;
    string ciudadOrigen;
    string ciudadDestino;
    string remolques;

public:
    cargamento(string c, string o, string d, string r)
            : cliente(c), ciudadOrigen(o), ciudadDestino(d), remolques(r)
    {}

    virtual void informacion() = 0;

    void setCliente(string c) { cliente = c; }
    string getCliente() { return cliente; }

    void setCiudadOrigen(string o) { ciudadOrigen = o; }
    string getCiudadOrigen() { return ciudadOrigen; }

    void setCiudadDestino(string d) { ciudadDestino = d; }
    string getCiudadDestino() { return ciudadDestino; }

    void setRemolques(string r) { remolques = r; }
    string getRemolques() { return remolques; }
};

#endif // PROYECTOTC1030_CARGAMENTO_H
