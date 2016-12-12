#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include "goFish.h"

using namespace std;


// Vector used to create the card playing deck
Deck :: Deck()
{
	// makes deck of 52 cards
	const int NumberOfCards = 52;
	int deck[NumberOfCards];
	string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };


	vector<string> deck(NumberOfCards);

	for (int i = 0; i < NumberOfCards; i++)
		deck[i] = i;

	// shuffles the deck before the game
	srand(time(0));
	for (int i = 0; i < NumberOfCards; i++)
	{
		int index = rand() % NumberOfCards;
		int temp = deck[i];
		deck[i] = deck[index];
		deck[index] = temp;
	}

	// draw cards from deck
	Hand player1;
	Hand player2;

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			player1[i] = deck[i];
		else
			player2[i % 5] = deck[i];


//		string rank = ranks[deck[i % 13]];
	//	cout << "Card number " << deck[i] << ": " << rank << endl; 
	}
}

// function used to start game and hand First Five cards to each player
void Gofish::StartGame()
{
	Deck PlayingCards;

}

// used to shuffle the deck again
void Deck::shuffle()
{

}
// draws (removes) the card from the top of the deck
void Deck::removeCard()
{

}

// the hand of the player (used as vector)
Hand::Hand()
{
	vector<string> mycards;
 
}

// Used to check hand for any pairs in the begining of each turn
bool Hand::checkpairs()
{
	for(counter < mycards.size(); int counter = 0;counter++)
	{
		for(counter2 < mycards.size(); int counter2 = 0;counter2++)
		{
			if(mycards[counter] == mycards[counter2] && counter != counter2)
			remove cards from hand;
			return true;
		}
	}
	return false;
}

// Used by player to ask what card is in the other players hand
void Hand::ask(string guess)
{

}
// used to draw card when the other player says Go Fish
void Hand::drawCard()
{
	for (int i = 0; i < 1; i++)
		mycards.push_back(i + 1) = deck[0];
}
/*string Card::getSuit()
{
	
}
string Card::getRank()
{

}*/