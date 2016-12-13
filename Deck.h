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
	string player1hand;
	string player2hand;
	vector <string> cardsRemaining;
public:
	Deck(vector <string> &cardsRemaining);
	void removeCard();
};
