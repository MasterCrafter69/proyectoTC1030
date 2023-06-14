#ifndef PROYECTOTC1030_TAULINER_H
#define PROYECTOTC1030_TAULINER_H
#include "Cargamento.h"

using namespace std;

class Tauliner : public Cargamento
{
protected:
    string contenido;
    double peso;

public:
    // Constructor
    Tauliner(string c, string o, string r, string cont, double p)
            : Cargamento(c, o, r), contenido(cont), peso(p)
    {}

    // Implementación del método virtual puro de la clase padre (Sobreescritura de métodos)
    void informacion() override {
        cout << "Cliente: " << getCliente() << endl;
        cout << "Origen: " << getOrigen() << endl;
        cout << "Remolques: " << getRemolques() << endl;
        cout << "Contenido: " << contenido << endl;
        cout << "Peso: " << peso << " Kilogramos" << endl;
    }

    // Métodos de acceso
    void setContenido(string cont) { contenido = cont; }
    string getContenido() { return contenido; }

    void setPeso(double p) { peso = p; }
    double getPeso() { return peso; }
};

#endif //PROYECTOTC1030_TAULINER_H
