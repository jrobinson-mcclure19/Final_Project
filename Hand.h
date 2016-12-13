#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// class used to define the hand
class Hand
{
private:
	int score1;
	int score2;
	int record1;
	int record2;
	int start;
	vector <string> mycards;
	vector<string> eraseCards;
	vector <string> h2;
	string guess;
public:
	bool checkpairs(vector <string> mycards);
	void drawCard();
	void ask(Hand h2);
	vector<string> removeCardFromHand(vector<string> &eraseCards, int start);
	Hand(vector<string> &mycards);
};
