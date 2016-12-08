#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "deck.h"

using namespace std;

 Deck::deck()
{
	 string ranks[] =
	 { "Ace", "2", "3","4", "5", "6", "7", "8", "9","10", "Jack", "Queen", "King" };

	 const int NumberOfCards = 52;

	vector<int> deck(NumberOfCards);
	// initialize cards
	for (int i = 0; i < NumberOfCards; i++)
		deck[i] = i;

	// shuffle the cards
	srand(time(0));
	for (int i = 0; i < NumberOfCards; i++)
	{
		int index = rand() % NumberOfCards;
		int temp = deck[i];
		deck[i] = deck[index];
		deck[index] = temp;
}

	void Deck::draw()
	{
		string rank = ranks[deck[i] % 13];
	}