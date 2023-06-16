#ifndef PROYECTOTC1030_ALMACEN_H
#define PROYECTOTC1030_ALMACEN_H
#include <iostream>
#include <vector>
#include <string>
#include "trailer.h"

using namespace std;

class almacen
{
private:
    string nombre;
    string ubicacion;
    vector<trailer> trailers;  // Almacena una lista de trailers

public:
    // Constructor
    almacen(string n, string u)
            : nombre(n), ubicacion(u)
    {}

    // Métodos de acceso
    void setNombre(string n) { nombre = n; }
    string getNombre() { return nombre; }

    void setUbicacion(string u) { ubicacion = u; }
    string getUbicacion() { return ubicacion; }

    // Método para agregar un trailer al almacén
    void addTrailer(trailer tr) { trailers.push_back(tr); }

    // Método para obtener la lista de trailers
    vector<trailer>& getTrailers() { return trailers; }

    // Método para mostrar la información del almacén
    void mostrarInformacion() {
        cout << "Nombre: " << getNombre() << endl;
        cout << "Ubicación: " << getUbicacion() << endl;
    }
};

#endif //PROYECTOTC1030_ALMACEN_H
