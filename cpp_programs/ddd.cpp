#include <iostream>
#include <conio.h>
#include <stdlib.h> // for system("cls")
using namespace std;

// Board array to store the positions (0-9 for simplicity, index 0 is unused)
char board[10] = {'0','1','2','3','4','5','6','7','8','9'};

// Class definition for Tic-Tac-Toe
class TicTacToe {
public:
    void displayBoard();  // Function to show the game board
    void playGame();      // Main function to run the game
    int checkWin();       // Function to check if someone has won
};

// Function to display the Tic-Tac-Toe board
void TicTacToe::displayBoard() {
    system("cls");  // Clear the console screen
    cout << "\n*** Tic - Tac - Toe ***\n";
    cout << "Player 1 (X)  -  Player 2 (O)\n\n";

    // Printing the board with current values
    cout << "     |     |     \n";
    cout << "  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << board[7] << "  |  " << board[8] << "  |  " << board[9] << "\n";
    cout << "     |     |     \n\n";
}

// Function to check the game status
int TicTacToe::checkWin() {
    // Winning conditions (rows, columns, diagonals)
    if (board[1] == board[2] && board[2] == board[3]) return 1;
    if (board[4] == board[5] && board[5] == board[6]) return 1;
    if (board[7] == board[8] && board[8] == board[9]) return 1;

    if (board[1] == board[4] && board[4] == board[7]) return 1;
    if (board[2] == board[5] && board[5] == board[8]) return 1;
    if (board[3] == board[6] && board[6] == board[9]) return 1;

    if (board[1] == board[5] && board[5] == board[9]) return 1;
    if (board[3] == board[5] && board[5] == board[7]) return 1;

    // Draw condition (if all positions are filled)
    if (board[1] != '1' && board[2] != '2' && board[3] != '3' &&
        board[4] != '4' && board[5] != '5' && board[6] != '6' &&
        board[7] != '7' && board[8] != '8' && board[9] != '9')
        return 0;

    return -1; // Game is still ongoing
}

// Main game loop
void TicTacToe::playGame() {
    int player = 1;   // Player 1 starts first
    int choice;       // Position chosen by player
    int status = -1;  // Game status (-1 = ongoing, 1 = win, 0 = draw)
    char mark;        // 'X' or 'O'

    do {
        displayBoard();  // Show the board
        player = (player % 2) ? 1 : 2;  // Decide whose turn it is
        cout << "Player " << player << ", enter a number: ";
        cin >> choice;   // Input choice (1-9)
        
        // Assign symbol based on player
        mark = (player == 1) ? 'X' : 'O';

        // Check if move is valid (position not already taken)
        if (choice >= 1 && choice <= 9 && board[choice] == ('0' + choice)) {
            board[choice] = mark;  // Place mark on board
        } else {
            cout << "Invalid move! ";
            player--;   // Retry the same player
            getch();    // Wait for key press
        }

        status = checkWin();  // Check if someone won or game is draw
        player++;  // Switch to next player
    } while (status == -1);  // Keep playing until win/draw

    displayBoard();  // Final board display
    if (status == 1) {
        cout << "==> Player " << --player << " wins!\n";
    } else {
        cout << "==> Game draw!\n";
    }
}

// Main function
int main() {
    TicTacToe game;
    game.playGame(); // Start the game
    return 0;
}
