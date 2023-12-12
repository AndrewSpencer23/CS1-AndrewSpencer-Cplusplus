// Andrew Spencer

// Final Project

// Tick-Tack-Toe Game

#include <iostream>
#include <iomanip>

using namespace std;

void printMenu(void);
void printBoard(char board[3][3]);
void getLocation(char board[3][3]);
bool checkWinColumn(char board[3][3]);
bool checkWinRow(char board[3][3]);
bool checkWinOther(char board[3][3]);
bool program(char board[3][3]);
void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char *argv[]) {
    char board[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    bool keepRunning = true;
    if(argc == 2 && string(argv[1]) == "exit") {
        exit(EXIT_SUCCESS); // exit the program
    }
    else {
        // this loop will keep the program running until user wants to quit
        while (true) {
            if (!program(board)) // call program
                break; // break loop if program returned false
            cin.ignore(100, '\n');
            cout << "Press enter to continue... Think about your next move...";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Press enter to quit the program.\n";
    cout << "Goodbye... Come back soooooooooon... " << endl;
    cin.get();
    return 0;
}

void printGameMenu(void) {
    cout << "\n\nGame options:\n";
    cout << "[1] Enter an X in the 1st square\n";
    cout << "[2] Enter an X in the 2nd square\n";
    cout << "[3] Enter an X in the 3rd square\n";
    cout << "[4] Enter an X in the 4th square\n";
    cout << "[5] Enter an X in the 5th square\n";
    cout << "[6] Enter an X in the 6th square\n";
    cout << "[7] Enter an X in the 7th square\n";
    cout << "[8] Enter an X in the 8th square\n";
    cout << "[9] Enter an X in the 9th square\n";
    cout << "[10] Exit the game\n";
    cout << "Enter one of the game options [1-10]: ";
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
    cout << "\nPlease enter a position in the form of two numbers seperated by a space: ";
    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < 1; j++) {
            cin >> board[i][j];
        }
    }
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
    return winner;
}

bool checkWinDiagonal(char board[3][3]) {
    bool winner = false;
    for(size_t i = 0; i < 3; i++) {
        if(board[0][i] != ' ') {
            if(board[i][0] == board[2][i+2]) {
                if(board[1][i+1] == board[2][i+2]) {
                    winner = true;
                    break;
                }
            }
        }
    }
    return winner;
}

bool program(char board[3][3], bool winner) {
    int option = 1; // variable to store user entered option
    double num1=0, num2=0; // variables to store two numbers entered by user
    // display menu options
    if(winner == false) {
        printGameMenu();
        do {
            if (cin >> option && option >= 1 && option <= 10) {
                break;
            }
            else {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid option, please enter a value between 1 and 10" << endl;
            }
        } while (true);
                
        // Call the function(s) or perform some operations based on user input
        switch(option) {
            case 1:
            {
                printBoard(board);
                cout << "Enter an X or an O: ";
                cin >> board[0][0];
                if(board[0][0] == 'X') {
                    board[0][1] = 'O';
                    printBoard(board);
                }
                if(board[0][0] == 'O') {
                    board[0][1] = 'X';
                    printBoard(board);
                }
                checkWinColumn(board);
                checkWinRow(board);
                checkWinDiagonal(board);
                break;
            }
            case 2:
            {
                printBoard(board);
                cout << "Enter an X or an O: ";
                cin >> board[0][1];
                if(board[0][1] == 'X') {
                    board[1][1] = 'O';
                    printBoard(board);
                }
                if(board[0][1] == 'O') {
                    board[1][1] = 'X';
                    printBoard(board);
                }
                checkWinColumn(board);
                checkWinRow(board);
                checkWinDiagonal(board);
                break;
            }
            case 3:
            {
                printBoard(board);
                cout << "Enter an X or an O: ";
                cin >> board[0][2];
                if(board[0][2] == 'X') {
                    board[2][1] = 'O';
                    printBoard(board);
                }
                if(board[0][2] == 'O') {
                    board[2][1] = 'X';
                    printBoard(board);
                }
                checkWinColumn(board);
                checkWinRow(board);
                checkWinDiagonal(board);
                break;
            }
            case 4:
            {
                printBoard(board);
                cout << "Enter an X or an O: ";
                cin >> board[1][0];
                if(board[1][0] == 'X') {
                    board[2][2] = 'O';
                    printBoard(board);
                }
                if(board[1][0] == 'O') {
                    board[2][2] = 'X';
                    printBoard(board);
                }
                checkWinColumn(board);
                checkWinRow(board);
                checkWinDiagonal(board);
                break;
            }
            case 5:
            {
                printBoard(board);
                cout << "Enter an X or an O: ";
                cin >> board[1][1];
                if(board[1][1] == 'X') {
                    board[2][0] = 'O';
                    printBoard(board);
                }
                if(board[1][1] == 'O') {
                    board[2][0] = 'X';
                    printBoard(board);
                }
                checkWinColumn(board);
                checkWinRow(board);
                checkWinDiagonal(board);
                break;
            }
            case 6:
            {
                printBoard(board);
                cout << "Enter an X or an O: ";
                cin >> board[1][2];
                if(board[1][2] == 'X') {
                    board[1][0] = 'O';
                    printBoard(board);
                }
                if(board[1][2] == 'O') {
                    board[1][0] = 'X';
                    printBoard(board);
                }
                checkWinColumn(board);
                checkWinRow(board);
                checkWinDiagonal(board);
                break;
            }
            case 7:
            {
                printBoard(board);
                cout << "Enter an X or an O: ";
                cin >> board[2][0];
                if(board[2][0] == 'X') {
                    board[0][2] = 'O';
                    printBoard(board);
                }
                if(board[2][0] == 'O') {
                    board[0][2] = 'X';
                    printBoard(board);
                }
                checkWinColumn(board);
                checkWinRow(board);
                checkWinDiagonal(board);
                break;
            }
            case 8:
            {
                printBoard(board);
                cout << "Enter an X or an O: ";
                cin >> board[2][1];
                if(board[2][1] == 'X') {
                    board[1][2] = 'O';
                    printBoard(board);
                }
                if(board[2][1] == 'O') {
                    board[1][2] = 'X';
                    printBoard(board);
                }
                checkWinColumn(board);
                checkWinRow(board);
                checkWinDiagonal(board);
                break;
            }
            case 9:
            {
                printBoard(board);
                cout << "Enter an X or an O: ";
                cin >> board[2][2];
                if(board[2][2] == 'X') {
                    board[0][0] = 'O';
                    printBoard(board);
                }
                if(board[2][2] == 'O') {
                    board[0][0] = 'X';
                    printBoard(board);
                }
                checkWinColumn(board);
                checkWinRow(board);
                checkWinDiagonal(board);
                break;
            }
            case 10:
                default:
                return false; // exit the program
            }
            return true;
    }
    else {
        cout << "There is a winner!!! Congratulations!!" << endl;
        exit(EXIT_SUCCESS);
    }
}
    
