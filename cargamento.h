#ifndef PROYECTOTC1030_CARGAMENTO_H
#define PROYECTOTC1030_CARGAMENTO_H
#include <iostream>
#include <string>

using namespace std;

class cargamento
{
protected:
    string cliente;
    string origen;
    string remolques;

public:
    // Constructor
    cargamento(string c, string o, string r)
            : cliente(c), origen(o), remolques(r)
    {}

    // Método virtual puro (sobreescritura en las clases derivadas)
    virtual void informacion() = 0;

    // Métodos de acceso
    void setCliente(string c) { cliente = c; }
    string getCliente() { return cliente; }

    void setOrigen(string o) { origen = o; }
    string getOrigen() { return origen; }

    void setRemolques(string r) { remolques = r; }
    string getRemolques() { return remolques; }
};

#endif //PROYECTOTC1030_CARGAMENTO_H
