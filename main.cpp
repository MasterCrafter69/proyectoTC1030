#include <iostream>
#include "almacen.h"
#include "trailer.h"
#include "cargamento.h"
#include "tauliner.h"
#include "cisterna.h"
#include "caja_fria.h"

using namespace std;

int main() {
    // Crear algunos cargamentos
    tauliner t1("Cliente 1", "Origen 1", "Remolques 1", "Contenido 1", 200.5);
    cisterna c1("Cliente 2", "Origen 2", "Remolques 2", "Contenido 2", 1000.0);
    caja_fria cf1("Cliente 3", "Origen 3", "Remolques 3", "Contenido 3", 500.0, 5.0);

    // Crear algunos trailers
    trailer tr1("ABC123", "Modelo1", "Chofer1");
    trailer tr2("XYZ789", "Modelo2", "Chofer2");
    trailer tr3("MNO456", "Modelo3", "Chofer3");

    // Crear un almacén
    almacen almacen("hola", "Queretaro");

    // Agregar los trailers y los cargamentos al almacén
    almacen.agregarTrailer(tr1);
    almacen.agregarTrailer(tr2);
    almacen.agregarTrailer(tr3);

    almacen.agregarCargamento(&t1);
    almacen.agregarCargamento(&c1);
    almacen.agregarCargamento(&cf1);

    // Mostrar el nombre de la empresa y su ubicación
    cout << "Nombre de la Empresa: " << almacen.getNombreEmpresa() << endl;
    cout << "Ubicación: " << almacen.getUbicacion() << endl << endl;

    // Mostrar información de los trailers en el almacén
    cout << "Trailers en el almacén:" << endl;
    for (auto tr : almacen.getTrailers()) {
        tr.mostrarInformacion();
        cout << endl;
    }

    // Mostrar información de los cargamentos en el almacén
    cout << "Cargamentos en el almacén:" << endl;
    for (auto cargamento : almacen.getCargamentos()) {
        cargamento->informacion();
        cout << endl;
    }

    return 0;
}
