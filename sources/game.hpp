#include <iostream>
#include <sstream>
#include <stdexcept>
#include "sources/player.hpp"

using namespace std;
class Game {
    private:
        Player p1;
        Player p2;
        int turn;
        string turnOutcome[26];
    public:
        Game(Player p1, Player p2);
        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
        void newGame();
};