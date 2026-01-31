#include <iostream>
#include <vector>

using namespace std;

class TicTacToe {
private:
    vector<vector<int>> board;  // 3x3 board for the game
    int currentPlayer;          // Tracks current player (1 or 2)

public:
    TicTacToe() {
        board = vector<vector<int>>(3, vector<int>(3, 0)); // Initialize board with zeros
        currentPlayer = 1; // Player 1 starts
    }

    void displayBoard() {
        cout << "\nCurrent Board:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == 1)
                    cout << " X ";
                else if (board[i][j] == 2)
                    cout << " O ";
                else
                    cout << " . ";
            }
            cout << endl;
        }
    }

    bool makeMove(int row, int col) {
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != 0) {
            cout << "Invalid move! Try again.\n";
            return false;
        }
        board[row][col] = currentPlayer;
        return true;
    }

    bool checkWin() {
        // Check rows, columns and diagonals for a win
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
                return true;
            if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
                return true;
        }
        if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
            return true;
        if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
            return true;

        return false;
    }

    bool checkDraw() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == 0)
                    return false; // There's still an empty spot
            }
        }
        return true;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    void playGame() {
        int row, col;
        bool gameWon = false, draw = false;

        cout << "Welcome to Tic-Tac-Toe!\nPlayer 1 is 'X' and Player 2 is 'O'.\n";

        while (!gameWon && !draw) {
            displayBoard();
            cout << "Player " << currentPlayer << "'s turn.\n";
            cout << "Enter row (0-2): ";
            cin >> row;
            cout << "Enter column (0-2): ";
            cin >> col;

            if (makeMove(row, col)) {
                gameWon = checkWin();
                if (gameWon) {
                    displayBoard();
                    cout << "Player " << currentPlayer << " wins!\n";
                }
                else {
                    draw = checkDraw();
                    if (draw) {
                        displayBoard();
                        cout << "It's a draw!\n";
                    }
                    else {
                        switchPlayer();
                    }
                }
            }
        }
    }
};

int main() {
    TicTacToe game;
    game.playGame();
    return 0;
}