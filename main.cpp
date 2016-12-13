//deck()
//shuffle()
//dealing of the hand
//ask for cards
//grab cards
//gofish
//draw
//score 
// File output/ input

#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <vector>
#include "Hand.h"
#include "goFish.h"

using namespace std;

int main()
{
	// vector used to make deck, and player hands
	vector<string> deck;
	vector<string> player1hand;
	vector<string> player2hand;

	// uses deck function form earlier in the game
	Deck mydeck(deck);

	// variables used to keep score during game
	int score1 = 0;
	int score2 = 0;

	// draw cards from deck
	Hand player1(player1hand);
	Hand player2(player2hand);

	// deals out 5 cards to each player to begin the game
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			player1hand[i] = deck[i];
		else
			player2hand[i % 5] = deck[i];

		// goes through each players hand and checks for pairs at start of turn
		player1.checkpairs();
		player2.checkpairs();

		// function used to guess the card in the hands of the other player
		bool correct = true;
		while (correct)
		{
			// prompt player 1 to guess card in the other players hand
			string guess;
			cout << "Guess a card in the other players hand. " << endl;
			cin >> guess;
			
			// loop that deals with possible situations when guessing
			for (int j = 0; j < player1hand.size(); j++)
			{
				// if player guesses a card that is also in thier hand
				if (guess == player1hand[j])
				{
					for (int k = 0; k < player2hand.size(); k++)
					{
						// if the card guessed is also in the hand of the opponent 
						if (guess == player2hand[k])
						{
							player1.removeCardFromHand(guess);
							player2.removeCardFromHand(guess);
							score1++;
						}
						// if the player guesses a card the other doesnt have they draw from the deck and thier turn is over
						else
						{
							player1.drawCard();
							
							for (int h = 0; h < player1hand; h++)
							{
								if (player1hand[h] == player1hand[0])
								{
									//guess again
								}
								else
									//end turn
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