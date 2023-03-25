#include "card.hpp"
#include "deck.hpp"
#include <algorithm>
#include <random>
#include <chrono>
#include <vector>
using namespace ariel;
using namespace std;

Deck::Deck()
{
    this->deck[0] = Card(1, "Ace of Clubs");
    this->deck[1] = Card(2, "Two of Clubs");
    this->deck[2] = Card(3, "Three of Clubs");
    this->deck[3] = Card(4, "Four of Clubs");
    this->deck[4] = Card(5, "Five of Clubs");
    this->deck[5] = Card(6, "Six of Clubs");
    this->deck[6] = Card(7, "Seven of Clubs");
    this->deck[7] = Card(8, "Eight of Clubs");
    this->deck[8] = Card(9, "Nine of Clubs");
    this->deck[9] = Card(10, "Ten of Clubs");
    this->deck[10] = Card(11, "Jack of Clubs");
    this->deck[11] = Card(12, "Queen of Clubs");
    this->deck[12] = Card(13, "King of Clubs");
    this->deck[13] = Card(1, "Ace of Diamonds");
    this->deck[14] = Card(2, "Two of Diamonds");
    this->deck[15] = Card(3, "Three of Diamonds");
    this->deck[16] = Card(4, "Four of Diamonds");
    this->deck[17] = Card(5, "Five of Diamonds");
    this->deck[18] = Card(6, "Six of Diamonds");
    this->deck[19] = Card(7, "Seven of Diamonds");
    this->deck[20] = Card(8, "Eight of Diamonds");
    this->deck[21] = Card(9, "Nine of Diamonds");
    this->deck[22] = Card(10, "Ten of Diamonds");
    this->deck[23] = Card(11, "Jack of Diamonds");
    this->deck[24] = Card(12, "Queen of Diamonds");
    this->deck[25] = Card(13, "King of Diamonds");
    this->deck[26] = Card(1, "Ace of Hearts");
    this->deck[27] = Card(2, "Two of Hearts");
    this->deck[28] = Card(3, "Three of Hearts");
    this->deck[29] = Card(4, "Four of Hearts");
    this->deck[30] = Card(5, "Five of Hearts");
    this->deck[31] = Card(6, "Six of Hearts");
    this->deck[32] = Card(7, "Seven of Hearts");
    this->deck[33] = Card(8, "Eight of Hearts");
    this->deck[34] = Card(9, "Nine of Hearts");
    this->deck[35] = Card(10, "Ten of Hearts");
    this->deck[36] = Card(11, "Jack of Hearts");
    this->deck[37] = Card(12, "Queen of Hearts");
    this->deck[38] = Card(13, "King of Hearts");
    this->deck[39] = Card(1, "Ace of Spades");
    this->deck[40] = Card(2, "Two of Spades");
    this->deck[41] = Card(3, "Three of Spades");
    this->deck[42] = Card(4, "Four of Spades");
    this->deck[43] = Card(5, "Five of Spades");
    this->deck[44] = Card(6, "Six of Spades");
    this->deck[45] = Card(7, "Seven of Spades");
    this->deck[46] = Card(8, "Eight of Spades");
    this->deck[47] = Card(9, "Nine of Spades");
    this->deck[48] = Card(10, "Ten of Spades");
    this->deck[49] = Card(11, "Jack of Spades");
    this->deck[50] = Card(12, "Queen of Spades");
    this->deck[51] = Card(13, "King of Spades");
}

void Deck::shuffle()
{
    srand(time(0));
    for (int i = 0; i< 52; i++)
    {
        int j = i + (rand() % (52 - i));
        swap(deck[i], deck[j]);
    }   
}

Card Deck::getCard(int index)
{
    return this->deck[index];
}