#include <iostream>
#include "cargamento.h"
#include "tauliner.h"
#include "cisterna.h"
#include "caja_fria.h"
using namespace std;

int main()
{
    // Creación de un objeto de la clase Tauliner
    tauliner t1("Cliente 1", "Origen 1", "Remolques 1", "Contenido 1", 200.5);
    // Llamada al método 'informacion' que imprime todos los detalles del objeto
    cout << "Tauliner: " << endl;
    t1.informacion();
    cout << endl;

    // Creación de un objeto de la clase Cisterna
    cisterna c1("Cliente 2", "Origen 2", "Remolques 2", "Contenido 2", 1000.0);
    cout << "Cisterna: " << endl;
    c1.informacion();
    cout << endl;

    // Creación de un objeto de la clase Caja_Fria
    caja_fria cf1("Cliente 3", "Origen 3", "Remolques 3", "Contenido 3", 500.0, 5.0);
    cout << "Caja_Fria: " << endl;
    cf1.informacion();
    cout << endl;

    return 0;
}
