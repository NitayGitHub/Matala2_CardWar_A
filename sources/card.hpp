#include <iostream>
#include <sstream>
#include <stdexcept>

using namespace std;

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