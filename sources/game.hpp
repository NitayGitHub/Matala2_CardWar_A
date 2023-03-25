#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <sstream>
#include "player.hpp"
#include "deck.hpp"
using namespace std;
namespace ariel{

class Game
{
private:
    Player& p1;
    Player& p2;
    int turn;
    Deck deck;
    string turnOutcome[STACKINISIZE];
    string winner;
    bool gameStarted;

public:
    Game(Player& p1, Player& p2);
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