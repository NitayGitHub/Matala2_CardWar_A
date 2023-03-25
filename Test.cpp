#include "doctest.h"
#include "sources/game.hpp"
#include "sources/player.hpp"
#include "sources/card.hpp"
#include <iostream>
#include <memory>
using namespace std;
using namespace ariel;

Player p1("p1");
Player p2("p2");
Player p3("p3");
Player p4("p4");
Game game1_2(p1, p2);
Game game1_3(p1, p3);
Game game2_1(p2, p1);
Game game1_2_ver2(p1, p2);
Game game3_4(p3, p4);

TEST_CASE("CardsWon == 0")
{
    CHECK(p1.cardesTaken() == 0);
}

TEST_CASE("Print Before Turns Were Played")
{
    CHECK_THROWS(game1_2.printLastTurn());
    CHECK_THROWS(game1_2.printWiner());
    CHECK_THROWS(game1_2.printLog());
}

TEST_CASE("Stack Size Must Be 21 Or Less. Not Negative.")
{
    for (int i = 0; i < 5; i++)
    {
        game1_2.playTurn();
    }
    CHECK(p1.stacksize() >= 0);
    CHECK(p1.stacksize() <= 21);
}

TEST_CASE("No Player Takes Cards.")
{
    for (int i = 0; i < 2; i++)
    {
        game1_2.playTurn();
    }
    CHECK((p1.cardesTaken() > 0 || p2.cardesTaken() > 0));
}

TEST_CASE("Start Playing Diffrent Game Before First One Ended.")
{
    // While game1_2 hasn't finished, the games below can't be played.
    CHECK_THROWS(game1_3.playTurn());
    CHECK_THROWS(game2_1.playTurn());
    CHECK_THROWS(game1_2_ver2.playTurn());
    game3_4.playTurn();
    CHECK_THROWS(game1_3.playTurn());
    game3_4.playAll();
}

TEST_CASE("Play After Game Ended")
{
    game1_2.playAll();
    CHECK_THROWS(game1_2.playTurn());
    CHECK_THROWS(game1_2.playAll());
}

TEST_CASE("Print After Game Ended")
{
    CHECK_NOTHROW(game1_2.printLastTurn());
    CHECK_NOTHROW(game1_2.printWiner());
    CHECK_NOTHROW(game1_2.printLog());
    CHECK_NOTHROW(game1_2.printStats());
}

TEST_CASE("Same Player; Diffrent Rival.")
{
    // Ensure the player 1 doesn't hold previous game's cards.
    // If he does and after a turn p3 wins, we will get a false check.
    game1_3.playTurn();
    CHECK((p1.cardesTaken() == 0 || p3.cardesTaken() == 0));
    CHECK(p1.stacksize() == p3.stacksize());
}
