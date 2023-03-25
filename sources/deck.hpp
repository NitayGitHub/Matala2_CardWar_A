#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <sstream>
#include "card.hpp"
using namespace std;
namespace ariel{
class Deck
{
private:
    Card deck[52];

public:
    Deck();
    void shuffle();
    Card getCard(int index);
};
}
#endif