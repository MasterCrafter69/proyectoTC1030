#include <iostream>
#include <string>
#include "trailer.h"
#include "almacen.h"
#include "cargamento.h"
#include "cisterna.h"
#include "tauliner.h"
#include "caja_fria.h"

using namespace std;

int main() {
    string nombre_empresa, ubicacion;
    cout << "Ingrese el nombre de la empresa: ";
    getline(cin, nombre_empresa);
    cout << "Ingrese la ubicación de la empresa: ";
    getline(cin, ubicacion);

    almacen mi_almacen(nombre_empresa, ubicacion);

    int opcion;
    do {
        cout << "\n1. Ver información del almacén\n";
        cout << "2. Agregar trailer\n";
        cout << "3. Eliminar trailer\n";
        cout << "4. Salir\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                mi_almacen.mostrarInformacion();
                break;

            case 2: {
                string placa, modelo, chofer;
                string cliente, ciudadOrigen, ciudadDestino, remolques, contenido;
                double peso, temperatura;
                int tipo;

                cout << "Ingrese la placa del trailer: ";
                getline(cin, placa);
                cout << "Ingrese el modelo del trailer: ";
                getline(cin, modelo);
                cout << "Ingrese el nombre del chofer: ";
                getline(cin, chofer);
                cout << "Ingrese el nombre del cliente: ";
                getline(cin, cliente);
                cout << "Ingrese la ciudad de origen: ";
                getline(cin, ciudadOrigen);
                cout << "Ingrese la ciudad de destino: ";
                getline(cin, ciudadDestino);
                cout << "Ingrese la información de los remolques: ";
                getline(cin, remolques);
                cout << "Ingrese el tipo de cargamento (1: Tauliner, 2: Cisterna, 3: Caja Fría): ";
                cin >> tipo;
                cin.ignore();

                cargamento* carga;
                switch(tipo) {
                    case 1:
                        carga = new tauliner(cliente, ciudadOrigen, ciudadDestino, remolques, contenido, peso);
                        break;
                    case 2:
                        carga = new cisterna(cliente, ciudadOrigen, ciudadDestino, remolques, contenido, peso);
                        break;
                    case 3:
                        cout << "Ingrese la temperatura del cargamento: ";
                        cin >> temperatura;
                        cin.ignore();
                        carga = new caja_fria(cliente, ciudadOrigen, ciudadDestino, remolques, contenido, peso, temperatura);
                        break;
                    default:
                        cout << "Tipo de cargamento inválido, se creará un Tauliner por defecto.\n";
                        carga = new tauliner(cliente, ciudadOrigen, ciudadDestino, remolques, contenido, peso);
                }
                cout << "Ingrese el contenido del cargamento: ";
                getline(cin, contenido);
                cout << "Ingrese el peso del cargamento: ";
                cin >> peso;
                cin.ignore();

                trailer tr(placa, modelo, chofer);
                mi_almacen.addTrailer(tr);
                break;
            }
            case 3: {
                string placa;
                cout << "Ingrese la placa del trailer que desea eliminar: ";
                getline(cin, placa);
                mi_almacen.removeTrailer(placa);
                break;
            }
            case 4:
                cout << "Saliendo...\n";
                break;
            default:
                cout << "Opción inválida. Por favor intente de nuevo.\n";
        }
    } while (opcion != 4);

    return 0;
}