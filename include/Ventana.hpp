#include <curses.h>
#include <unistd.h>
#include <list>
#include <Actualizable.hpp>

using namespace std;

class Ventana
{
private:
public:
    Ventana(/* args*/);
    ~Ventana();

    void Actualizar(list<Actualizable*> actualizables)
    {
for (auto &&actualizable : actualizables)
{
    actualizable->Actualizar();
}

    
        usleep(41000); // 0.41s fotogramas
    }

    void Dibujar(list<Dibujo*> dibujos)
    {

        clear();
        for (auto &&dibujo : dibujos)
{
   dibujo->Dibujar();
}

        
        box(stdscr, '|', '=');
        refresh();
    }
};
Ventana::Ventana(/* args*/)
{
    initscr();
    noecho();
    curs_set(FALSE);
    nocbreak();
    keypad(stdscr,TRUE);
    timeout(10);
}
Ventana::~Ventana()
{
    keypad(stdscr,FALSE);
    endwin();
}