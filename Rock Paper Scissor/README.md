# Rock Paper Scissors Game

A simple console-based Rock Paper Scissors game written in C++.  
You can play against the computer or against another player.

---

## Features
- Two modes:
  - Player vs Computer
  - Player vs Player
- Keeps track of:
  - Wins
  - Losses
  - Ties
- Randomized computer moves
- Option to play multiple rounds until the player decides to quit

---

## Requirements
- C++ compiler supporting C++11 or later (e.g., g++)
- Standard C++ libraries

---

## How to Compile and Run

Compile with:
g++ Main.cpp Functions.cpp -o rock_paper_scissors

Run with:
./rock_paper_scissors

---

## How to Play
1. Start the program.
2. Choose a mode:
   - 1 → Player vs Computer  
   - 2 → Player vs Player
3. Choose your move:
   - 1 → Rock  
   - 2 → Paper  
   - 3 → Scissors  
4. The winner is displayed, and the score is updated.
5. Decide whether to play again (yes/no).

---

## Example Gameplay
Welcome to the Rock Paper Scissor game!
You can play against the computer or another player.
Scores:
Player 1 Wins: 0
Player 2 Wins: 0
Ties: 0
Choose your mode:
1. Player vs Computer
2. Player vs Player
> 1
Choose your move:
1. Rock
2. Paper
3. Scissors
> 1
Rock vs Scissors
Player 1 wins!
Scores:
Player 1 Wins: 1
Player 2 Wins: 0
Ties: 0
Do you want to play again? (yes/no): yes

---

## Project Structure
- Main.cpp → Entry point of the program  
- Functions.cpp → Implementation of game functions  
- Functions.hpp → Function declarations and global variables  

---

## Author
Created as a C++ console project for practicing functions, conditionals, and loops.
