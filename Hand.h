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
	void removeCardFromHand(string RemovedCardHand);
	Hand(vector<string> mycards);
};