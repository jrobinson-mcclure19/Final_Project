#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include "Hand.h"

// the hand of the player (used as vector)
Hand::Hand(vector<string> &mycards)
{
}

// Used to check hand for any pairs in the begining of each turn
bool Hand::checkpairs(vector <string> mycards)
{
	for (int counter = 0; counter < mycards.size(); counter++)
	{
		for (int counter2 = 0; counter2 < mycards.size(); counter2++)
		{
			//cout << mycards[counter] << mycards[counter2] << endl;
			if (!mycards[counter2].compare(mycards[counter]))
			{
				//cout << counter << counter2 << endl;
				if (counter != counter2)
				{
					//remove cards from hand;
					this->removeCardFromHand(mycards,counter);
					this->removeCardFromHand(mycards,counter);
					score1++;
					cout << "correct answwer" << endl;
				}
			}

		}
	}
	return false;
}

// used to draw card when the other player says Go Fish
void Hand::drawCard()
{
	for (int i = 0; i < 1; i++)
		mycards.push_back(mycards[0]);
}

// used to remove card from hand once a pair is found
vector<string> Hand::removeCardFromHand(vector<string> &eraseCards, int start)
{

	cout << eraseCards[start] << start << endl;
	*eraseCards.erase(eraseCards.begin() + start);

	for (int j = 0; j < eraseCards.size(); j++)
	{
		cout << eraseCards[j] << " ";
	}
	cout << endl;
	return eraseCards;
}

// Used by player to ask what card is in the other players hand
void Hand::ask(Hand h2)
{
	// function used to guess the card in the hands of the other player
	bool correct = true;
	while (correct)
	{
		// prompt player 1 to guess card in the other players hand
		string guess;
		cout << "Guess a card in the other players hand. " << endl;
		cin >> guess;

		cout << h2.mycards.size() << endl;

		// loop that deals with possible situations when guessing
		for (int j = 0; j < mycards.size(); j++)
		{
			// if player guesses a card that is also in their hand
			if (guess == mycards[j])
			{
				cout << "in my hand" << endl;

				for (int k = 0; k < h2.mycards.size(); k++)
				{
					// if the card guessed is also in the hand of the opponent 
					if (guess == h2.mycards[k])
					{
						this->removeCardFromHand(mycards, k);
						h2.removeCardFromHand(mycards, k);
						score1++;
					}
					// if the player guesses a card the other doesnt have they draw from the deck and their turn is over
					else
					{
						this->drawCard();

						for (int h = 1; h < mycards.size(); h++)
						{
							if (mycards[h] == mycards[0])
							{
								correct = true;
								score1++;
								this->removeCardFromHand(mycards, h);
								h2.removeCardFromHand(mycards, h);
							}
							else
								correct = false;
						}
					}
				}
			}
			// if player guesses a card not in their hand
			else
			{
				cout << "make sure you typed a card in your hand. Guess again" << endl;
			}
		}
	}
}
