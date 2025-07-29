#include <iostream>
#include <random>
#include "Functions.hpp"
using namespace std;

// Constants for choices
const string rock = "Rock";
const string paper = "Paper";
const string scissors = "Scissors";

// Global variables
bool isPlayer2Computer = false;
string computerChoice;
string player1Choice;
string player2Choice;
string result2;
int wins = 0;
int losses = 0;
int ties = 0;
bool isGameOver = false;



// Function to display the scores
void displayScores() {
	cout << "Scores:" << endl;
	cout << "Player 1 Wins: " << wins << endl;
	cout << "Player 2 Wins: " << losses << endl;
	cout << "Ties: " << ties << endl;
}

// Function to handle game over scenario
void gameOver() {
    string response;
    while (true) {
        cout << "Do you want to play again? (yes/no): ";
        cin >> response;
        if (response == "yes" || response == "Yes" || response == "YES" || response == "y" || response == "Y" || response == "1") {
            isGameOver = false;
            break;
        }
        else if (response == "no" || response == "No" || response == "NO" || response == "n" || response == "N" || response == "2") {
            isGameOver = true;
            break;
        }
        else {
            cout << "Invalid response. Please type 'yes' or 'no'." << endl;
        }
    }
}

// Function to get the player's choice
void getPlayerChoice(string& player) {
    cout << "Choose your move: " << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        player = rock;
    }
    else if (choice == 2) {
        player = paper;
    }
    else if (choice == 3) {
        player = scissors;
    }
    else {
        cout << "Invalid choice. Please try again." << endl;
        getPlayerChoice(player);
    }
}

// Function to generate a random number between 1 and 3
int getRandomNumber() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 3);
    return dis(gen);
}

// Function to get the computer's choice
void getComputerChoice() {
    int randomNumber = getRandomNumber();
    if (randomNumber == 1) {
        computerChoice = rock;
    }
    else if (randomNumber == 2) {
        computerChoice = paper;
    }
    else if (randomNumber == 3) {
        computerChoice = scissors;
    }
}

// Function to choose between player vs computer or player vs player
void playerOrComputer() {
    cout << "Choose your mode:" << endl;
    cout << "1. Player vs Computer" << endl;
    cout << "2. Player vs Player" << endl;
    int choice;
    cin >> choice;

    if (choice == 1) {
        getPlayerChoice(player1Choice);
        getComputerChoice();
        isPlayer2Computer = true;
    }
    else if (choice == 2) {
        cout << "Player 1's choice:" << endl;
        getPlayerChoice(player1Choice);
        cout << "Player 2's choice:" << endl;
        getPlayerChoice(player2Choice);
    }
    else {
        cout << "Invalid choice. Please try again." << endl;
        playerOrComputer();
    }
}

// Function to get the result for Player 2
void getResult2() {
    if (isPlayer2Computer) {
        result2 = computerChoice;
    }
    else {
        result2 = player2Choice;
    }
}

// Function to determine the winner
void whoWins() {
	
    getResult2();

    cout << player1Choice << " vs " << result2 << endl;

    if (player1Choice == result2) {
        cout << "It's a tie!" << endl;
		ties++;
    }
    else if ((player1Choice == rock && result2 == scissors) ||
        (player1Choice == paper && result2 == rock) ||
        (player1Choice == scissors && result2 == paper)) {
        cout << "Player 1 wins!" << endl;
		wins++;
    }
    else {
        cout << "Player 2 wins!" << endl;
		losses++;
    }
    displayScores();
    gameOver();
    


    isPlayer2Computer = false; // Reset for next game
}