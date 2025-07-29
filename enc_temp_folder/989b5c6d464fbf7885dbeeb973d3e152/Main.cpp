

#include <iostream>
#include "Functions.hpp"
#include <random>
using namespace std;

int main()
{
	bool isGameOver = false;
	cout << "Welcome to the Rock Paper Scissor game!" << endl;
	cout << "You can play against the computer or another player." << endl;
	while (!isGameOver) {
		playerOrComputer();
		whoWins();
		displayScores();
	}
	cout << "Thank you for playing!" << endl;


}