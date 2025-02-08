#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[3][3];
    char currentPlayer;
    int turn;

public:
    TicTacToe() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                board[i][j] = ' ';
            }
        }
        currentPlayer = 'X';
        turn = 0;
    }

    void drawBoard() {
        cout << "-------------\n";
        for (int i = 0; i < 3; ++i) {
            cout << "| ";
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j] << " | ";
            }
            cout << "\n-------------\n";
        }
    }

    bool checkWin() {
        for (int i = 0; i < 3; ++i) {
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

    void play() {
        cout << "Welcome to Tic-Tac-Toe!\n";

        while (turn < 9) {
            drawBoard();

            int row, col;
            while (true) {
                cout << "Player " << currentPlayer << ", enter row (0-2) and column (0-2): ";
                cin >> row >> col;

                if (board[row][col] != ' ' || row < 0 || row > 2 || col < 0 || col > 2) {
                    cout << "Invalid move. Try again.\n";
                } else {
                    break;
                }
            }

            board[row][col] = currentPlayer;

            if (checkWin()) {
                drawBoard();
                cout << "Player " << currentPlayer << " wins!\n";
                return;
            }

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            turn++;
        }
        drawBoard();
        
        if (!checkWin()) {
            cout << "It's a draw!\n";
        }
    }
};

int main() {
    TicTacToe game;
    game.play();
    return 0;
}
