#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Martillo.hpp>
class Personaje : public Dibujo, public Actualizable
{
private:
Martillo* martillo;

public:
    Personaje() : Dibujo("Escalador") {
    }
    Personaje(int x, int y) : Dibujo(x, y, "Escalador")
    {
    }
    void Actualizar()
    {
    //     this->x += 1;
    //     // this->y += 1;
    }
    void DesplazarIzquierda(){
        this->x -=1;
    }
    void DesplazarDerecha(){
        this->x +=1;
    }
     void DesplazarArriba(){
        this->y-=1;
    }
     void DesplazarAbajo(){
        this->y+=1;
    }
    void RecogerMartillo(Martillo* martillo){
        this-> martillo = martillo;
    }
    void Disparar(){
        this->martillo = martillo;
    }
    

    ~Personaje(){};
};
