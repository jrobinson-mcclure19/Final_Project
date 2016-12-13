#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include "Deck.h"

// Vector used to create the card playing deck
Deck::Deck(vector<string> &cardsRemaining)
{
	// makes deck of 52 cards
	const int NumberOfCards = 52;

	string cards[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King",
		"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King",
		"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King",
		"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

	for (int c = 0; c < NumberOfCards; c++)
	{
		cardsRemaining.push_back(cards[c]);
	}

	// shuffles the deck before the game
	srand(time(0));
	for (int i = 0; i < NumberOfCards; i++)
	{
		int index = rand() % NumberOfCards;
		string temp = cardsRemaining[i];
		cardsRemaining[i] = cardsRemaining[index];
		cardsRemaining[index] = temp;
	}
}


// draws (removes) the card from the top of the deck
void Deck::removeCard()
{
	cardsRemaining.erase(cardsRemaining.begin());

}
