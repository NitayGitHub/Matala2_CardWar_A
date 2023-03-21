#include <iostream>
#include <sstream>
#include <stdexcept>
#include <list>
#include "sources/card.hpp"
using namespace std;

class Player
{
private:
    string name;
    Card wonCards[52];
    Card cardsStack[26];
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
    void cardesTaken();
    void stacksize();
    void updateStats(int wins, int games, int draws, int score);

    void addWonCard(Card card);
    void randomizeStack();
    Card drawCard();
};