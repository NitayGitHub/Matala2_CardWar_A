#include "player.hpp"
#include "game.hpp"
#include <array>
using namespace std;
using namespace ariel;

Game::Game(Player &p1, Player &p2) : p1(p1), p2(p2), turn(0) {}

void Game::playTurn()
{
    if (!winner.empty())
    {
        throw string("Game has ended.");
    }
    if (this->p1.getCurrR().empty() && this->p2.getCurrR().empty())
    {
        this->p1.setCurrR(this->p2.getName());
        this->p2.setCurrR(this->p1.getName());
        p1.newStack();
        p2.newStack();
        gameStarted = true;
    }
    if (this->p1.getCurrR().empty() || this->p2.getCurrR().empty())
    {
        throw string("One of the players is in game.");
    }
    if(this->p1.getCurrR().compare(this->p2.getName()) != 0 || this->gameStarted == false){
        throw string("One of the players is in game.");
    }
    this->turn++;
    this->p1.decreaseStack();
    this->p2.decreaseStack();
    //game logic
    p1.addWonCards(1); // incorrect for now.


    if (this->p1.stacksize() == 0)
    {
        this->p1.setCurrR("");
        this->p2.setCurrR("");
        this->winner = this->p2.getName(); // incorrect for now.
        gameStarted = false;
    }
}
void Game::playAll()
{
    do
    {
        this->playTurn();
    } while (this->p1.stacksize() != 0);
}
void Game::printLastTurn()
{

    if (this->turn == 0)
    {
        throw string("No turns were played yet");
    }
    else
    {
    }
}
void Game::printWiner()
{

    if (this->winner.empty())
    {
        throw string("No winner was announced yet");
    }
    else
    {
    }
}
void Game::printLog()
{
    if (this->turn == 0)
    {
        throw string("No turns were played yet");
    }
    else
    {
    }
}
void Game::printStats(){};
void Game::newGame(){};