#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>
#include <Ventana.hpp>
#include <list>
#include <Personaje.hpp>
#include <Martillo.hpp>
#include <Bala.hpp>
#include <Enemigo.hpp>
#include <Enemigosec.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Personaje* personaje1 = new Personaje(0,0);
    Enemigo* enemigo1 = new Enemigo(80,0);
    Enemigosec* enemigo2 = new Enemigosec(60,70);

    Martillo* martillo = new Martillo();
    Bala* bala = new Bala(0,1);

    personaje1->RecogerMartillo(martillo);

    list<Dibujo*> dibujos;
    dibujos.push_back(personaje1);
    dibujos.push_back(enemigo1);
    dibujos.push_back(enemigo2);
    dibujos.push_back(martillo);
    dibujos.push_back(bala);

    list<Actualizable*> actualizables;
    actualizables.push_back(personaje1);
    actualizables.push_back(enemigo1);
    actualizables.push_back(enemigo2);
    actualizables.push_back(bala);

    while(true){
        
        int key=getch();
        if (key == 'q' || key == 'Q')
            break;
        
        if (key == 'a' || key==KEY_LEFT){
            personaje1->DesplazarIzquierda();
        }
        if (key == 'd' || key==KEY_RIGHT){
            personaje1->DesplazarDerecha();
        }
        if (key == 'w' || key==KEY_UP){
            personaje1->DesplazarArriba();
        }
        if (key == 's' || key==KEY_DOWN){
            personaje1->DesplazarAbajo();
        }

        if (key == 'a' || key==KEY_LEFT){
            martillo->DesplazarIzquierda();
        }
        if (key == 'd' || key==KEY_RIGHT){
            martillo->DesplazarDerecha();
        }
        if (key == 'w' || key==KEY_UP){
            martillo->DesplazarArriba();
        }
        if (key == 's' || key==KEY_DOWN){
            martillo->DesplazarAbajo();
        }
        if (key == 'f'){
            martillo ->Disparar();
        }
        if (key == 'p'){
            bala ->CambiarDireccion();
        }
     
        
        
        refresh();

        
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
     
    };
   

     return 0;
}
