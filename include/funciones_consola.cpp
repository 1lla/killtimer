#include <iostream>
#include <string>
#include <stdlib.h>


#include "header_consola.h"
#include "juego.h"
// aqui las funciones y sus secretos




char Menu(){         // muestra y redibe la opción escogiida por el usuario
    char r;
    titulo("KILLER TIME");
    std::cout << "\n\t\tM E N U\n"
              << "\n\tExit\t[0]"
              << "\n\tJuego 1\t[1]"
              << "\n\tJuego 2\t[2]"
              << "\n\tJuego 3\t[3]"
              << "\n\n\tBitte tippen eine Zahl ein: ";
    std::cin  >> r;
    std::cout << "\n\tSu respuesta es: " << r << "\n\n\n";
    return r;
};

void start(){

        char resS = Menu();
        int res = resS & 0x0f;
        titulo("KILLER TIME");
        switch(res){
            case 0:
                caso_no(resS);
                std::cout << "\n\t.... sigue a"<<  std::endl;
                juego salir( std::string = "nombre del juego", int = 0, int = 0, int = 0 );
                std::cout << salir <<  std::endl; //testeando
                salir.game_go();        //porque no puedo llamar esta funcion?
            break;

            case 1:
                caso_no(resS);
                break;
            case 2:
                caso_no(resS);
                break;
            case 3:
                caso_no(resS);
                break;
        }

}

//void titulo(std::string palabra);
void caso_no(char c){
    int res = c & 0x0f;
    std::string t = "GAME No ";
    t += c;
    titulo2(t);
    // crea objeto de clase juego

}
