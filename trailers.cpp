#include <string>
#include <vector>

class Pedido {
private:
    int id;
    std::string producto;

public:
    Pedido(int id, std::string producto) : id(id), producto(producto) {}

};

class Cargamento {
private:
    std::vector<Pedido> pedidos;

public:
    void agregarPedido(const Pedido& pedido) {
        pedidos.push_back(pedido);
    }
};

class Chofer {
private:
    std::string nombre;
    std::string licencia;

public:
    Chofer(std::string nombre, std::string licencia) : nombre(nombre), licencia(licencia) {}

};

class Trailer {
private:
    Cargamento cargamento;
    Chofer chofer;

public:
    Trailer(Chofer chofer) : chofer(chofer) {}

    void setCargamento(const Cargamento& cargamento) {
        this->cargamento = cargamento;
    }
};

class Empresa {
private:
    std::vector<Trailer> trailers;

public:
    void agregarTrailer(const Trailer& trailer) {
        trailers.push_back(trailer);
    }
};
