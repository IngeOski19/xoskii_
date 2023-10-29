#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <list>

using namespace std;

class Martillo : public Dibujo
{
private:
int numeroDisparos;
public:
Martillo () : Dibujo("Martillo")
{
 this-> numeroDisparos = 5;
}
~Martillo() {}
 void Actualizar(){
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
 void Recargar(){
this-> numeroDisparos = 5;
 }
 void Disparar(){
    if(this->numeroDisparos >0){
    this->numeroDisparos -=1;
    }
 }
};