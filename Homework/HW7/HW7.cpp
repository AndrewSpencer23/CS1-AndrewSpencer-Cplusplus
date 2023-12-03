// HW7
// Andrew Spencer

// Input:
// The input consists of two lines.
// A single integer, the number of pieces.
// The values of the pieces, space-separated. It is given that the values are between 1 and 100

// Output:
// a single line containing two integers, combined value of Alice’s pieces, and combined value of Bob’s pieces.

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

// Function prototypes
void sortPieces(int, int[]);
int calcPieces(int, int[], int, int);
void test();


int main(int argc, char* argv[]) {
    // Main function
    if (argc > 1 && string(argv[1]) == "test") {
        test(); 
    }
    else {
        int tmpNum;
        int bobCalc = 0;
        int aliceCalc = 0;
        int numPieces = 0;
        cout << "Please enter the number of pieces to be divided amongst Bob and Alice: ";
        cin >> numPieces;
        int pieces[numPieces];
        // Calling getValues function
        if (numPieces <= 15 && numPieces >= 1) {
            cout << "Please enter " << numPieces << " values to be divided seperated by a space: ";
            for(int i = 0; i < numPieces; i++) {
                cin >> pieces[i];
        }
    }
    else {
        cout << "Invalid number of values chosen." << endl;
    }
    cout << "Alice total: " << aliceCalc << "   Bob total: " << bobCalc << endl;
    }
    return 0;
}

// Instead of using two seperate functions to sort the array for each Bob and Alice,
// I used one void function that utilizes boolean in order to sort the array.
void sortPiecesArray(int numPieces, int pieces[], int tmpNum) {
    bool sort = false;
    if (numPieces <= 15 && numPieces >= 1) {
        for(int i = 0; i < numPieces - 1; i++) {
            sort = true;
            for(int j = 0; j < (numPieces - i) -1; j++) {
                if(pieces[j] <= pieces[j+1]) {
                    tmpNum = pieces[j];
                    pieces[j] = pieces[j+1];
                    pieces[j+1] = tmpNum;
                    sort = false;
                }
            }
            if (sort)
                break;
        }
    }
}

// I got rid of my two int functions to calculate each of their values and instead used one void function that
// Passes in existing variables to execute the calculation (Muuuuuch easier than what I was trying to do.)
void calcPieces(int numPieces, int pieces[], int bobCalc, int aliceCalc) {
    // Function to calculate Alice's value
    if (numPieces <= 15 && numPieces >= 1) {
        for(int j = 0; j < numPieces-1; j++) {
            for(int i = 0; i < numPieces-1; i++) {
                if (pieces[i] > pieces[i+1]) {
                    int tmpNum = pieces[i+1];
                    pieces[i+1] = pieces[i];
                    pieces[i] = tmpNum;
                }
            }
        }
    }
    return aliceCalc;
}


void test() {
    // Test function
}
