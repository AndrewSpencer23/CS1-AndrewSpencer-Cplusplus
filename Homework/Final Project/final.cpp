// Andrew Spencer

// Final Project

// Tick-Tack-Toe Game

#include <iostream>
#include <iomanip>

using namespace std;

void printBoard(char [][3]);

int main(int argc, char *argv[]) {
    char board[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    printBoard(board);
    
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
