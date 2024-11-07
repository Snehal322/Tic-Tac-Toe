# Tic-Tac-Toe game


Project Overview -

This is a simple Tic Tac Toe game built using C++. It allows two players to play the classic game in the console, taking turns until one player wins or the game ends in a draw. The game keeps track of each player’s moves and checks for a winning combination after each turn.

How to Play -

The game is played on a 3x3 grid.
Players take turns to place their markers (Player 1 uses "X" and Player 2 uses "O") in an empty cell on the grid.
The first player to align three of their markers horizontally, vertically, or diagonally wins the game.
If all cells are filled without a winning combination, the game ends in a draw.

Features -

Two-player game: Allows two users to play against each other.
Real-time win-checking: After each move, the game checks if the current player has won.
Draw detection: The game detects a draw if all cells are filled and no one has won.

Requirements-

C++ Compiler: You need a C++ compiler (like GCC or Visual Studio) to compile and run this program.


Installation & Setup -

1. Clone this repository or download the source code.
2. Open a terminal or command prompt and navigate to the project directory.
3. Compile the program using a C++ compiler
4. Run the compiled executable
5. Or you can directly select Debug ad run


Code Structure -

tic_tac_toe.cpp: This file contains the main game logic, including functions to display the board, handle player input, check for win conditions, and track the game state.


Usage -

Start the game by running the compiled program.
Players will be prompted to enter their names first
Then alternatley, they can select the cell number (1-9) where they want to place their marker.
The board will be displayed after each turn, showing the updated state.
The game will announce the winner or declare a draw when the game ends.


Future Improvements -

Add a single-player mode with AI.
Add error handling for invalid inputs.
