#include "card.hpp"
using namespace ariel;
using namespace std;

Card::Card(int value, string cardName){
    this->value = value;
    this->cardName = cardName;
}

Card::Card(){
    this->value = -1;
}

int Card::getValue(){
    return this->value;
}

string Card::toString(){
    return this->cardName;
}