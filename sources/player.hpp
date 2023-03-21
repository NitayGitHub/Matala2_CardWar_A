#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <array>
#include "card.hpp"
using namespace std;

constexpr int STACKINISIZE = 26;
constexpr int MAXSCOREPOS = 52;
namespace ariel
{
class Player
{
private:
    string name;
    array<Card, MAXSCOREPOS> wonCards;
    array<Card, STACKINISIZE> cardsStack;
    int stackSize;
    int wonCardsSize;
    // player stats
    int totalwins;
    int totalGames;
    int totaldraws;
    int highestScore;

public:
    Player(string name);
    string getName();
    int cardesTaken();
    int stacksize();
    void updateStats(int wins, int games, int draws, int score);

    void addWonCard(Card card);
    void randomizeStack();
    Card drawCard();
};
}
#endif