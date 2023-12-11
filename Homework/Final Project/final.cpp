// Andrew Spencer

// Final Project

// Tick-Tack-Toe Game

#include <iostream>
#include <iomanip>

using namespace std;

void printBoard(char [][3]);
void getLocation(char [][3]);

int main(int argc, char *argv[]) {
    char board[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    printBoard(board);

    for(int i = 0; i < 9, i++) {
        if() {
            // If there is a winner, stop the game
        }
        else {
            // Otherwise, run the program, prompt the user
        }
    }
    return 0;
}

void printBoard(char board[3][3]) {
    cout << setfill('-') << setw(7) << "" << endl;
    cout << setfill(' ');

    for(size_t i = 0; i < 3; i++) {
        cout << "|";
        for(size_t j = 0; j < 3; j++) {
            cout << board[i][j] << "|";
        }
        cout << endl;
        cout << setfill('-') << setw(7) << "" << endl;
        cout << setfill(' ');
    }
}


