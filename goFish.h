#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

//class used to define the deck
class Deck
{
private:
	vector <int> cardsRemaining;
public:
	void deck();
	void shuffle();
	void removeCard();
};

// class used to define the hand
class Hand
{
private:
	int score;
	vector<string> mycards;
	string guess;
public:
	bool checkpairs();
	void drawCard();
	void ask(string guess);
	Hand();
};

// class used to define game and start game
class Gofish
{
private:

public:
	void StartGame();
};

// class used to define cards and their values
class Card
{
private:
//	string suit;
//	string cardRank;
public:
	//string getSuit();
	//string getRank();
};