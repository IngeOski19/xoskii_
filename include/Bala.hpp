#pragma once 
#include <Dibujo.hpp>
#include <Actualizable.hpp>


class Bala : public Dibujo, public Actualizable
{
private:
   int direccion;
public:
    Bala(int x, int y) : Dibujo(x,y,"Bala") 
    {
this->direccion = 1;
    }
    ~Bala() {}
     void CambiarDireccion(){
        this->direccion *= -1;
    }
    void Actualizar(){
        this->x+= this->direccion;
    }
};
