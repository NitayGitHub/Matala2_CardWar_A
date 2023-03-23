#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <array>
#include "player.hpp"
using namespace std;
namespace ariel{

class Game
{
private:
    Player p1;
    Player p2;
    int turn;
    string turnOutcome[STACKINISIZE];

public:
    Game(Player p1, Player p2);
    Game();
    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();
    void newGame();
};

}

#endif