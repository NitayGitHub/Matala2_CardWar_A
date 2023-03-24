#include "player.hpp"
#include "card.hpp"
using namespace std;
using namespace ariel;

Player::Player(string name){
    this->name = name;
    this->stackSize = 0;
    this->wonCardsSize = 0;
    this->totalwins = 0;
    this->totalGames = 0;
    this->totaldraws = 0;
    this->highestScore = 0;
}

string Player::getName(){
    return this->name;
}

int Player::cardesTaken(){
    return this->wonCardsSize;
}

int Player::stacksize(){
    if(this->stackSize < 0){
        throw string("Negative stack size.");
    }
    return this->stackSize;
}

void Player::updateStats(int wins, int games, int draws, int score){
    this->totalwins += wins;
    this->totalGames += games;
    this->totaldraws += draws;
    if (score > this->highestScore){
        this->highestScore = score;
    }
}

void Player::addWonCard(Card card){
    this->wonCards[this->wonCardsSize] = card;
    this->wonCardsSize++;
}

void Player::randomizeStack(){
    for (int i = 0; i < STACKINISIZE; i++){
        this->cardsStack[i].randomizeCard();
    }
    this->stackSize = STACKINISIZE;
}

Card Player::drawCard(){
    Card card = this->cardsStack[this->stackSize-1];
    this->stackSize--;
    //cout << "Player " << this->name << " ST: " << this->stackSize << endl;
    return card;
}