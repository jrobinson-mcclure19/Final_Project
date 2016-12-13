#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include "Hand.h"
#include "goFish.h"

using namespace std;

// the hand of the player (used as vector)
Hand::Hand(vector<string> mycards)
{
}

// Used to check hand for any pairs in the begining of each turn
bool Hand::checkpairs()
{
	for (int counter = 0; counter < mycards.size(); counter++)
	{
		for (int counter2 = 0; counter2 < mycards.size(); counter2++)
		{
			if (mycards[counter] == mycards[counter2] && counter != counter2)
			{
				//remove cards from hand;
				player1.removeCardFromHand(guess);
				mydeck.removeCard(guess);
				score1++;
				return true;
			}
		}
	}
	return false;
}

// Used by player to ask what card is in the other players hand
void Hand::ask(string guess)
{
	// make guess thing
	/*cout >> "Guess a card in the other players hand " >> endl;*/

}
// used to draw card when the other player says Go Fish
void Hand::drawCard()
{
	for (int i = 0; i < 1; i++)
		mycards.push_back(i + 1) = cardsRemaining[0];
}
// used to remove card from hand once a pair is found
void Hand::removeCardFromHand(string RemovedCardHand)
{
	mycards.erase(mycards.begin());
}
