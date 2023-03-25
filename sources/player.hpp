#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <array>
#include "card.hpp"
using namespace std;

constexpr int STACKINISIZE = 26;
namespace ariel
{
class Player
{
private:
    string name;
    int stackSize;
    int wonCardsSize;
    string currRival;
    // player stats
    int totalwins;
    int totalGames;
    int totaldraws;
    int highestScore;

public:
    Player(string name);
    string getName();
    void setCurrR(string Rname);
    string getCurrR();
    int cardesTaken();
    int stacksize();
    void updateStats(int wins, int games, int draws, int score);
    void addWonCards(int cards_won);
    void newStack();
    void decreaseStack();
};
}
#endif