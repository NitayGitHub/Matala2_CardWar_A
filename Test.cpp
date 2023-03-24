#include "doctest.h"
#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

Player p1("p1");
Player p2("p2");
Game game(p1, p2);

TEST_CASE("Print Before Turns Were Played")
{
    CHECK_THROWS(game.printLastTurn());
    CHECK_THROWS(game.printWiner());
    CHECK_THROWS(game.printLog());
}
TEST_CASE("Stack Size Must Be 21 Or Less. Not Negative.")
{
    for (int i = 0; i < 5; i++)
    {
        game.playTurn();
    }
    CHECK(p1.stacksize() >= 0);
    CHECK(p1.stacksize() <= 21);
}
TEST_CASE("No Player Takes Cards.")
{
    for (int i = 0; i < 5; i++)
    {
        game.playTurn();
    }
    CHECK((p1.cardesTaken() > 0 || p2.cardesTaken() > 0));
}

TEST_CASE("Play After Game Ended")
{
    game.playAll();
    CHECK_THROWS(game.playTurn());
    CHECK_THROWS(game.playAll());
}
