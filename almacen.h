#ifndef PROYECTOTC1030_ALMACEN_H
#define PROYECTOTC1030_ALMACEN_H
#include <string>
#include <vector>
#include "trailer.h"
#include "cargamento.h"

using namespace std;

class almacen
{
private:
    string nombreEmpresa;
    string ubicacion;
    vector<trailer> trailers;
    vector<cargamento*> cargamentos;

public:
    // Constructor
    almacen(const string &nombre, const string &ubicacion)
            : nombreEmpresa(nombre), ubicacion(ubicacion)
    {}

    // Destructor
    ~almacen() {
        for(auto cargamento : cargamentos) {
            delete cargamento;
        }
    }

    // Métodos de acceso
    void setNombreEmpresa(const string &nombre) { nombreEmpresa = nombre; }
    string getNombreEmpresa() const { return nombreEmpresa; }

    void setUbicacion(const string &ubicacion) { this->ubicacion = ubicacion; }
    string getUbicacion() const { return ubicacion; }

    // Método para agregar un trailer al almacen
    void agregarTrailer(const trailer &trailer) { trailers.push_back(trailer); }

    // Método para obtener la lista de trailers
    vector<trailer> getTrailers() const { return trailers; }

    // Método para agregar un cargamento al almacen
    void agregarCargamento(cargamento* cargo) { cargamentos.push_back(cargo); }

    // Método para obtener la lista de cargamentos
    vector<cargamento*> getCargamentos() const { return cargamentos; }
};

#endif //PROYECTOTC1030_ALMACEN_H
