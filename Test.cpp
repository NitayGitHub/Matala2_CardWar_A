#include "doctest.h"
#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"
#include <iostream>
using namespace std;
using namespace ariel;
ariel::Player p1("p1");
ariel::Player p2("p2");
ariel::Game game;

TEST_CASE("Print Before Turns Were Played")
{
    CHECK_THROWS(game.printLastTurn());
}