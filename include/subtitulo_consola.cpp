#include <iostream>
#include <cstring>

#include "header_consola.h"

void linea(int l){
        std::cout << "\t";
         for(int i= 0 ; i <= (l + 10); i++){
            std::cout << "*";
        };
};

void titulo(std::string palabra){      //terminar
    std::string fakeTab = "     ";
    int longitud;

    longitud = palabra.size();

    linea(longitud);
    std::cout << "\n\t" << fakeTab << palabra << fakeTab << std::endl;
    linea(longitud);
}

