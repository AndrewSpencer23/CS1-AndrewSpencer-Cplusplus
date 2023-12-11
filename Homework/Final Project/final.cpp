// Andrew Spencer

// Final Project

// Tick-Tack-Toe Game

#include <iostream>
#include <iomanip>

using namespace std;

void printBoard(char board[3][3]);
void getLocation(char board[3][3]);
bool checkWinColumn(char board[3][3]);
bool checkWinRow(char board[3][3]);
bool checkWinOther(char board[3][3]);

int main(int argc, char *argv[]) {
    char board[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    for(int i = 0; i < 9; i++) {
        if(checkWinColumn(board) == true || checkWinRow(board) == true) {
            break;
        }
        else {
            printBoard(board);
            getLocation(board);
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

void getLocation(char board[3][3]) {
    int pos1, pos2;
    cout << "\nPlease enter a position in the form of two numbers seperated by a space: ";
}

bool checkWinColumn(char board[3][3]) {
    bool winner = false;
    for(size_t i = 0; i < 3; i++) {
        if(board[0][i] != ' ') {
            if(board[i][0] == board[2][i]) {
                if(board[1][i] == board[2][i]) {
                    winner = true;
                    break;
                }
            }
        }
    }
    if(winner) {
        cout << "There is a winner!" << endl;
    }
    else {
        cout << "There is no winner yet." << endl;
    }
    return winner;
}

bool checkWinRow(char board[3][3]) {
    bool winner = false;
    for(size_t i = 0; i < 3; i++) {
        if(board[0][i] != ' ') {
            if(board[0][i] == board[i][2]) {
                if(board[i][1] == board[i][2]) {
                    winner = true;
                    break;
                }
            }
        }
    }
    if(winner) {
        cout << "There is a winner!" << endl;
    }
    else {
        cout << "There is no winner yet." << endl;
    }
    return winner;
}

bool checkWinOther(char board[3][3]) {

}


