#include <iostream>
#include <vector>
#include "cargamento.h"
#include "tauliner.h"
#include "cisterna.h"
#include "caja_fria.h"

using namespace std;

int main()
{
    // Creación de un objeto de la clase Tauliner
    tauliner t1("Cliente 1", "Origen 1", "Remolques 1", "Contenido 1", 200.5);

    // Creación de un objeto de la clase Cisterna
    cisterna c1("Cliente 2", "Origen 2", "Remolques 2", "Contenido 2", 1000.0);

    // Creación de un objeto de la clase Caja_Fria
    caja_fria cf1("Cliente 3", "Origen 3", "Remolques 3", "Contenido 3", 500.0, 5.0);

    // Crear un vector de punteros a Cargamento
    vector<cargamento*> cargamentos;
    cargamentos.push_back(&t1);
    cargamentos.push_back(&c1);
    cargamentos.push_back(&cf1);

    // Iterar sobre el vector e imprimir la información
    for (auto cargamento : cargamentos) {
        cargamento->informacion();
        cout << endl;
    }

    return 0;
}
