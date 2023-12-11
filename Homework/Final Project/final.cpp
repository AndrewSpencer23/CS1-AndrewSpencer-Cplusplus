// Andrew Spencer

// Final Project

// Tick-Tack-Toe Game

#include <iostream>
#include <iomanip>

using namespace std;

void test();
void printMenu(void);
void printBoard(char board[3][3]);
void getLocation(char board[3][3]);
bool checkWinColumn(char board[3][3]);
bool checkWinRow(char board[3][3]);
bool checkWinOther(char board[3][3]);
bool program();
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
    if(argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS); // exit the program
    }
    else {
        // this loop will keep the program running until user wants to quit
        while (true) {
            if (!program()) // call program
                break; // break loop if program returned false
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Enter to quit the program.\n";
    cout << "Good bye..." << endl;
    cin.get();
    return 0;
}

void printGameMenu(void) {
    cout << "\n\nGame options:\n";
    cout << "[1] Enter an X in the first square\n";
    cout << "[2] Enter an X in the second square\n";
    cout << "[3] Enter an X in the third square\n";
    cout << "[4] Enter an X in the fourth square\n";
    cout << "[5] Enter an X in the fifth square\n";
    cout << "[6] Enter an X in the sixth square\n";
    cout << "[7] Enter an X in the seventh square\n";
    cout << "[8] Enter an X in the eighth square\n";
    cout << "[9] Enter an X in the nineth square\n";
    cout << "[10] Quit the program\n";
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
    if(winner) {
        cout << "There is a winner!" << endl;
    }
    else {
        cout << "There is no winner yet." << endl;
    }
    return winner;
}

bool program() {
    int option = 1; // variable to store user entered option
    double num1=0, num2=0; // variables to store two numbers entered by user
    // display menu options
    printGameMenu();
    do {
        if (cin >> option && option >= 1 && option <= 8) {
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
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {
            break;
        }
        case 5:
        {
            break;
        }
        case 6:
        {
            break;
        }
        case 7:
        {
            break;
        }
        case 8:
        {
            break;
        }
        case 9:
        {
            break;
        }
        case 10:
            default:
            return false; // exit the program
        }
    return true;
}


