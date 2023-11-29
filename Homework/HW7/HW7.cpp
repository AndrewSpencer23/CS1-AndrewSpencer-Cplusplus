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
void getValues(int*, int*);
int alicePieces(int*, int*);
int bobPieces(int*, int*);
void test();


int main(int argc, char* argv[]) {
    // Main function
    int* numPieces = 0;
    int* pieces[*numPieces];
    getValues(numPieces, pieces[*numPieces]);
    if (*numPieces <= 15 && *numPieces >= 1) {
        cout << "Bob will recieve " << bobPieces(numPieces, pieces[*numPieces]) << "pieces." << endl << endl;
        cout << "Alice will recieve " << alicePieces(numPieces, pieces[*numPieces]) << "pieces." << endl << endl;
    }
    delete pieces[*numPieces];
    delete numPieces;
    return 0;
}

void getValues(int* numPieces, int* pieces[*numPieces]) {
    cout << "Please enter the number of pieces to be divided amongst Bob and Alice: ";
    cin >> *numPieces;
    if (*numPieces <= 15 && *numPieces >= 1) {
        for(int i = 0; i < *numPieces; i++) {
            cout << "Please enter a value to be divided: ";
            cin >> *pieces[i];
        }
    }
    else {
        cout << "Invalid number of values chosen." << endl;
    }
}

int alicePieces(int* numPieces, int* pieces[*numPieces]) {
    // Function to calculate Alice's value
    int aliceCalc;
    return aliceCalc;
}

int bobPieces(int* numPieces, int* pieces[*numPieces]) {
    // Function to calculate Bob's value
    int bobCalc;
    return bobCalc;
}

void test() {
    // Test function
}
