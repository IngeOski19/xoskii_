#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{
        std::cout << "Inicio del programa" << std::endl;
        // Mascota m1;
        // Mascota m2;
        // m1.Comer();
        // m2.Comer();
        std::cout << "int" << sizeof(int) << std::endl;
        std::cout << "char" << sizeof(char) << std::endl;
        std::cout << "bool" << sizeof(bool) << std::endl;
        std::cout << "float" << sizeof(float) << std::endl;
        std::cout << "double" << sizeof(double) << std::endl;
        std::cout << "Mascota" << sizeof(Mascota) << std::endl;

        std::cout << std::endl
                  << std::endl;
        std::cout << "Dirrecion de memoria: " << sizeof(Mascota) << std::endl;
        int a = 7;
        std::cout << "Tamaño: " << sizeof(a) << std::endl;
        std::cout << "Contenido: " << a << std::endl;
        std::cout << "Direccion: " << &a << std::endl;

        void *puntero = malloc(32);

        std::cout << std::endl
                  << std::endl;
        std::cout << "Dirrecion de memoria: " << std::endl;
        std::cout << "sizeof: " << sizeof(puntero) << std::endl;
        std::cout << "puntero1: " << puntero << std::endl;
        std::cout << "puntero2: " << &puntero << std::endl;

        free(puntero);

        void *mascota = malloc(sizeof(Mascota));
        free(mascota);

        // C - Memoria dinamica
        std::cout << "Mascota en C:  " << std::endl;
        Mascota *mascotaC = (Mascota *)malloc(sizeof(Mascota));
        mascotaC->Inicializar();
        mascotaC->DecirNombre();
        mascotaC->Destruir();
        free(mascotaC);

        // C++ - Memoria dinamica
        std::cout << "Mascota en C++:  " << std::endl;
        Mascota *mascotaCPP = new Mascota();
        mascotaCPP->DecirNombre();
        delete mascotaCPP;

        return 0;
}
