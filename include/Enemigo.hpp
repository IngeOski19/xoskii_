

class Enemigo : public Dibujo, public Actualizable
{
private:
  
public:
    Enemigo() : Dibujo("Terodactilo") {
    }
    Enemigo(int x, int y) : Dibujo(x, y, "Terodactilo"){
       
    }
    void Actualizar(){
        
    }

    ~Enemigo();
};


