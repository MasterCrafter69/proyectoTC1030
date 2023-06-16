#include <iostream>
#include "almacen.h"
#include "trailer.h"
#include "cargamento.h"
#include "tauliner.h"
#include "cisterna.h"
#include "caja_fria.h"

using namespace std;

int main() {
    // Crear algunos trailers
    trailer tr1("ABC123", "Modelo1", "Chofer1");
    trailer tr2("XYZ789", "Modelo2", "Chofer2");
    trailer tr3("MNO456", "Modelo3", "Chofer3");
    
    // Crear algunos cargamentos
    tauliner t1("Cliente 1", "Origen 1", "Remolques 1", "Contenido 1", 200.5);
    cisterna c1("Cliente 2", "Origen 2", "Remolques 2", "Contenido 2", 1000.0);
    caja_fria cf1("Cliente 3", "Origen 3", "Remolques 3", "Contenido 3", 500.0, 5.0);

    // Asignar cargamentos a trailers
    tr1.setCargamento(&t1);
    tr2.setCargamento(&c1);
    tr3.setCargamento(&cf1);

    // Crear un almacén
    almacen almacen("Mi Empresa", "Mi Ciudad");

    // Agregar los trailers al almacén
    almacen.addTrailer(tr1);
    almacen.addTrailer(tr2);
    almacen.addTrailer(tr3);

    // Mostrar información del almacén
    almacen.mostrarInformacion();

    // Mostrar información de los trailers y sus cargamentos en el almacén
    for (auto tr : almacen.getTrailers()) {
        tr.mostrarInformacion();
        cout << endl;
    }

    return 0;
}
