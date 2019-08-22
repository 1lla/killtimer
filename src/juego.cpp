#include <iostream>
#include <cstring>
#include "juego.h"
#include "header_consola.h"


juego :: juego( std::string gamename, int nogame, int wingames, int losegames){
    game_name = gamename;
    no_game = no_game;
    win_games = wingames;
    lose_games = losegames;
    void game_go();

    void backtomenu();
};

void juego::game_go(){
    std::cout << "Estos jugando" << std::endl;

};


void juego::backtomenu(){

}


/*
       public:
        juego(std::string, int, int, int);
        juego();
        void game_go();
        int total_gaming(int, int);
        void backtomenu();

    private:
        std::string game_name;
        int no_game;
        int win_games;
        int lose_games;
*/
//juego(std::string Game_name, int no_games, int win_games,




