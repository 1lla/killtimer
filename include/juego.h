#include "header_consola.h"


#ifndef JUEGO_H
#define JUEGO_H


class juego{

    public:
        juego(std::string, int, int, int);
        juego();
        void game_go();

        void backtomenu();

    private:
        std::string game_name;
        int no_game;
        int win_games;
        int lose_games;

    };
#endif // JUEGO_H
