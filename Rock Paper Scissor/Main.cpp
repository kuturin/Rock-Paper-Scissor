

#include <iostream>
#include "Functions.hpp"
#include <random>
using namespace std;

int main()
{
	extern bool isGameOver;
	cout << "Welcome to the Rock Paper Scissor game!" << endl;
	cout << "You can play against the computer or another player." << endl;
	displayScores();
	while (!isGameOver) {
		
		playerOrComputer();
		whoWins();
		
		
	}
	cout << "Thank you for playing!" << endl;


}