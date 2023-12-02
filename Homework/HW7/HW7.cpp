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
int alicePieces(int, int[]);
int bobPieces(int, int[]);
void test();


int main(int argc, char* argv[]) {
    // Main function
    if (argc > 1 && string(argv[1]) == "test") {
        test(); 
    }
    else {
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
    cout << "Alice total: " << alicePieces(numPieces, &pieces[numPieces]) << endl;
    cout << "Bob total: " << bobPieces(numPieces, &pieces[numPieces]) << endl;
    }
    return 0;
}

int alicePieces(int numPieces, int pieces[]) {
    // Function to calculate Alice's value
    int aliceCalc = 0;
    if (numPieces <= 15 && numPieces >= 1) {
        for(size_t i = 0; i < numPieces; i++) {
            if (pieces[0] >= pieces[1]) {
                aliceCalc = pieces[0] + pieces[1];
            }
        }
        
    }
    return aliceCalc;
}

int bobPieces(int numPieces, int pieces[]) {
    // Function to calculate Bob's value
    int bobCalc = 0;
    if (numPieces <= 15 && numPieces >= 1) {
        if (pieces[1] <= pieces[2]) {
            bobCalc = pieces[2] + pieces[3];
        }
    }
    return bobCalc;
}

void test() {
    // Test function
}
