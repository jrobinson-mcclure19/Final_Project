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
#include "Deck.h"

using namespace std;

int main()
{
	// vector used to make deck, and player hands
	vector<string> deck;
	vector<string> player1hand;
	vector<string> player2hand;

	// uses deck function from earlier in the game
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
			player1hand.push_back(deck[i]);
		else
			player2hand.push_back(deck[i]);
	}
	for (int j = 0; j < player1hand.size(); j++)
	{
		cout << player1hand[j] << ", ";
	}
	cout << endl;
	for (int k = 0; k < player2hand.size(); k++)
	{
		cout << player2hand[k] << ", ";
	}
	cout << endl;

		// goes through each players hand and checks for pairs at start of turn
	vector<string> checkedHand1;
	vector<string> checkedHand2;

	player1.checkpairs(player1hand);
	player2.checkpairs(player2hand);

	for (int i = 0; i < 3; i++)
	{
		checkedHand1 = player1.checkpairs(player1hand);
		cout << "did it" << endl;
	}
	cout << "Check 1 " << player1.checkpairs(checkedHand1) << endl;
	
	for (int g = 0; g < 3; g++)
	{
		checkedHand2 = player2.checkpairs(player2hand);
		cout << "did it 2" << endl;
	}
	cout << "Check 2 " << player2.checkpairs(checkedHand2) << endl;
		
		while (deck.size() != 0)
		{
			cout << "Player 1 turn" << endl;
			player1.ask(player2);
			cout << "Player 2 turn" << endl;
			player2.ask(player1);
		}
	
	// display the scires at the end
	cout << "Player 1's score is " << score1 << endl;
	cout << "Player 2's score is " << score2 << endl;

	// file output to display text for winners
	ofstream output;
	output.open("record.txt");

	if (score1 > score2)
	{
		output << "Player 1 wins!!! " << endl;
		output << "The score is " << score1 << "to " << score2 << endl;
	}

	else if (score2 > score1)
	{
		output << "Player 2 wins!!! " << endl;
		output << "The score is " << score2 << "to " << score1 << endl;
	}
	else
	{
		output << "Player 1 and Player 2 are tied! " << endl;
		output << "The score is " << score1 << "to " << score2 << endl;
	}

	output.close();

	ifstream input("record.txt");

	//int record1;
	//int record2;
	input >> score1 >> score2;
	cout << "The score to is " << score1 << "to " << score2 << endl;

	input.close();
}
