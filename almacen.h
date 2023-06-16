#ifndef ALMACEN_H
#define ALMACEN_H
#include <vector>
#include <iostream>
#include "trailer.h"

using namespace std;
class almacen {
private:
    string nombre;
    string ubicacion;
    vector<trailer> trailers;

public:
    almacen(string nombre, string ubicacion) : nombre(nombre), ubicacion(ubicacion) {}

    void addTrailer(const trailer& t) {
        trailers.push_back(t);
    }

    void removeTrailer(const string& placa) {
        for(auto it = trailers.begin(); it != trailers.end(); ++it) {
            if(it->getPlaca() == placa) {
                trailers.erase(it);
                return;
            }
        }
        cout << "El trailer con la placa " << placa << " no se encontró en el almacén.\n";
    }

    trailer* getTrailer(string placa) {
        for (auto& t : trailers) {
            if (t.getPlaca() == placa) {
                return &t;
            }
        }
        return nullptr;
    }

    vector<trailer>& getTrailers() {
        return trailers;
    }

    void mostrarInformacion() {
        cout << "\nNombre de la empresa: " << nombre;
        cout << "\nUbicación: " << ubicacion;

        if (trailers.empty()) {
            cout << "\nNo hay trailers en este almacen.\n";
        } else {
            cout << "\nTrailers: \n";
            for (auto& tr : trailers) {
                tr.mostrarInformacion();
                if (tr.getCargamento() != nullptr) {
                    cout << "Cargamento: ";
                    tr.getCargamento()->informacion();
                    cout << "\n";
                }
            }
        }
    }
};

#endif // ALMACEN_H
