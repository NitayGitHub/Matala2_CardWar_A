#include "player.hpp"
#include "game.hpp"
#include <array>
using namespace std;
using namespace ariel;

Game::Game(Player& p1, Player& p2) : p1(p1), p2(p2), turn(0){}

void Game::playTurn()
{
    if (this->p1.stacksize() == 0 && this->turn != 0)
    {
        throw string("Game has ended.");
    }
    if (this->turn == 0)
    {
        p1.randomizeStack();
        p2.randomizeStack();
    }
    this->turn++;
    this->p1.drawCard();
    this->p2.drawCard();
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
void Game::playAll()
{
    if (this->p1.stacksize() != 0 || this->turn == 0)
    {
        do {
            this->playTurn();
        }
        while (this->p1.stacksize() != 0);
    }
    else
    {
        throw string("Game has ended.");
    }
}
void Game::printWiner()
{

    if (this->p1.stacksize() != 0 || this->turn == 0)
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