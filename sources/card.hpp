#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel
{
class Card
{
private:
    int value;
    string cardName;

public:
    Card(int value, string cardName);
    int getValue();
    string getName();
    void randomizeCard();
};
}

#endif