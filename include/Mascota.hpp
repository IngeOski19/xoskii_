#include <iostream>
#include <string>
#include <cstdio>

class Mascota
{
private:
    std::string nombre;
public:
        Mascota(/* args */) {
            std::cout << "Ha nacido una nueva mascota: " << std::endl;
            this -> nombre = "kuri";

        }
    ~Mascota() {
        std::cout << "Adios mundo cruel: " << std::endl;

    }
    void Destruir()
    {
        std::cout << "Adios mundo cruel: " << std::endl;
    }
void Inicializar()
{
std::cout << "Ha nacido una nueva mascota: " << std::endl;
            this -> nombre = "kuri";
}
void DecirNombre()
{
std::cout << "Mi nombre es: " << this -> nombre << std::endl;
}
    

};



