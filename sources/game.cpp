#include "player.hpp"
#include "game.hpp"
#include <array>
using namespace std;
using namespace ariel;


Game::Game()
{
    this->turn = 0;
}

Game::Game(Player p1, Player p2)
{
    this->p1 = p1;
    this->p2 = p2;
    this->turn = 0;
}

void Game:: playTurn(){};
void Game:: printLastTurn(){};
void Game:: playAll(){};
void Game:: printWiner(){};
void Game:: printLog(){};
void Game:: printStats(){};
void Game:: newGame(){};