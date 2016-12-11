#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Deck
{
private:
	vector <int> cardsRemaining;
public:
	void deck();
	void shuffle();
	void removeCard();
};

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

class Gofish
{
private:

public:
	void StartGame();
};

class Card
{
private:
//	string suit;
//	string cardRank;
public:
	//string getSuit();
	//string getRank();
};