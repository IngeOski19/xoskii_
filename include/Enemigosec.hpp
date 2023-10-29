#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
class Enemigosec : public Dibujo, public Actualizable
{
private:
    int direccion;
public:
    Enemigosec() : Dibujo("Yeti") {
    }
    Enemigosec(int x, int y) : Dibujo(x, y, "Yeti")
    {
this->direccion -= 1;
    }
    void Actualizar(){
this-> x+= this->direccion;
    }

    ~Enemigosec();
};

