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

class Empleado {
protected:
    std::string nombre;

public:
    Empleado(std::string nombre) : nombre(nombre) {}
    virtual std::string obtenerInformacion() const = 0;  // Método puramente virtual.
};

class Chofer : public Empleado {
private:
    std::string licencia;

public:
    Chofer(std::string nombre, std::string licencia) : Empleado(nombre), licencia(licencia) {}
    std::string obtenerInformacion() const override {
        return "Chofer: " + nombre + ", Licencia: " + licencia;
    }
};

class Vehiculo {
protected:
    Cargamento cargamento;

public:
    virtual void setCargamento(const Cargamento& cargamento) {
        this->cargamento = cargamento;
    }
    virtual std::string obtenerInformacion() const = 0;
};

class Trailer : public Vehiculo {
private:
    Chofer chofer;

public:
    Trailer(Chofer chofer) : chofer(chofer) {}
    void setCargamento(const Cargamento& cargamento) override {
        Vehiculo::setCargamento(cargamento);
    }
    std::string obtenerInformacion() const override {
        return "Trailer conducido por: " + chofer.obtenerInformacion();
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
