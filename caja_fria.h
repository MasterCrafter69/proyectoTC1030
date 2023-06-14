#ifndef PROYECTOTC1030_CAJA_FRIA_H
#define PROYECTOTC1030_CAJA_FRIA_H
#include "cargamento.h"

using namespace std;

class caja_fria : public cargamento
{
protected:
    string contenido;
    double peso;
    double temperatura;

public:
    caja_fria(string c, string o, string r, string cont, double p, double temp)
            : cargamento(c, o, r), contenido(cont), peso(p), temperatura(temp)
    {}

    // Implementación del método virtual puro de la clase padre
    void informacion() override {
        cout << "Cliente: " << getCliente() << endl;
        cout << "Origen: " << getOrigen() << endl;
        cout << "Remolques: " << getRemolques() << endl;
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

#endif //PROYECTOTC1030_CAJA_FRIA_H
