#include "player.hpp"
#include "card.hpp"
using namespace std;
using namespace ariel;

Player::Player(string name){
    if (name.empty()){
        throw string("Player name is empty.");
    }
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

void Player::addWonCards(int cards_won){
    this->wonCardsSize+=cards_won;
}

void Player::newStack(){
    this->stackSize = STACKINISIZE;
    this->wonCardsSize = 0;
}

void Player::decreaseStack(){
    this->stackSize--;
}

void Player::setCurrR(string Rname){
    this->currRival = Rname;
}

string Player::getCurrR(){
    return this->currRival;
}