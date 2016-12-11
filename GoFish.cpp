#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include "goFish.h"

using namespace std;


void Gofish::StartGame()
{
	Deck PlayingCards;

}
Deck :: Deck()
{
	// make deck
	const int NumberOfCards = 52;
	int deck[NumberOfCards];
	string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };


	vector<string> deck(NumberOfCards);

	for (int i = 0; i < NumberOfCards; i++)
		deck[i] = i;

	// shuffle deck
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
void Deck::shuffle()
{

}
void Deck::removeCard()
{

}


Hand::Hand()
{
	vector<string> mycards;
}
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
void Hand::drawCard()
{
	mycards.push_back() = deck[0];
}
void Hand::ask(string guess)
{

}
/*string Card::getSuit()
{
	
}
string Card::getRank()
{

}*/