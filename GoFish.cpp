#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include "goFish.h"

using namespace std;


// Vector used to create the card playing deck
Deck :: Deck(vector <string> cardsRemaining)
{
	// makes deck of 52 cards
	const int NumberOfCards = 52;
	cardsRemaining[NumberOfCards];
	string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

	for (int i = 0; i < NumberOfCards; i++)
	cardsRemaining[i] = i;

	// shuffles the deck before the game
	srand(time(0));
	for (int i = 0; i < NumberOfCards; i++)
	{
		int index = rand() % NumberOfCards;
		string temp = cardsRemaining[i];
		cardsRemaining[i] = cardsRemaining[index];
		cardsRemaining[index] = temp;
	}

//		string rank = ranks[deck[i % 13]];
	//	cout << "Card number " << deck[i] << ": " << rank << endl; 
}


// draws (removes) the card from the top of the deck
void Deck::removeCard(string removedCard)
{
	cardsRemaining.erase(cardsRemaining.begin());

}

