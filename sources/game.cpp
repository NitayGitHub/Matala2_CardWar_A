#include "player.hpp"
#include "game.hpp"
#include <stdexcept>
using namespace std;
using namespace ariel;

Game::Game(Player &p1, Player &p2) : p1(p1), p2(p2), turn(0), deck(), gameStarted(false), drawCounter(0) {
if (&p1 == &p2)
{
    throw invalid_argument("Player can't play against itself.");
}
}

void Game::playTurn()
{
    if (!winner.empty())
    {
        throw string("Game has ended.");
    }
    if (!(this->p1.getState()) && !(this->p2.getState()))
    {
        this->p1.newStack();
        this->p2.newStack();
        this->p1.setState(true);
        this->p2.setState(true);
        gameStarted = true;
    }
    if ((this->p1.getState() && !(this->p2.getState())) || (!(this->p1.getState()) && this->p2.getState()))
    {
        throw string("One of the players is in the middle of a game.");
    }
    if(this->gameStarted == false){
        throw string("Two of the players are in the middle of other games.");
    }
    this->turn++;
    this->p1.decreaseStack();
    this->p2.decreaseStack();
    //game logic
    p1.addWonCards(1); // incorrect for now.


    if (this->p1.stacksize() == 0 && this->p2.stacksize() == 0)
    {
        this->p1.setState(false);
        this->p2.setState(false);
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