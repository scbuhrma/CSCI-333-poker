#ifndef __Card_H__
#define __Card_H__

#include <vector>
#incldue <string>


Class Card{
	
private	:
	int rank: /+number between 2-14 +/
	int suit: /+number between 1-4 +/
	const static std::string suitNames[4];
	const static std::string rankNames[13];

public:

	Card(int r, int s): //constructor

	//getter
	int getRank();
	int getSuit();

	//setter
	void setRank(int r);
	void setSuit(int s);

	//print
	void print();
}:
