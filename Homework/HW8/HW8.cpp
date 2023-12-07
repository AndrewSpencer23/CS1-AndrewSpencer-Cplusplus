// HW8
// Andrew Spencer

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cassert>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct person {
    string fName;
    string lName;
    int score1;
    int score2;
    int score3;
    int score4;
};


int countLines(fstream&);
void readVals(vector<person>, int);
float calcAvg(person);
void writeVals();

int main(int argc, char* argv[]) {
    int numLines = 0;
    vector<person> number;
    string inFileName, outFileName;
    cout << "Please enter an input file name: ";
    getline(cin, inFileName);
    
    cout << "\n\n Please enter an output file name: ";
    getline(cin, inFileName);

    
    fstream fs;
    fs.open(inFileName, ios_base::in);

    numLines = countLines(fs);

    fs.close();
    return 0;
}

void readVals(vector<person>, int) {

}

int countLines(fstream& fs) {
    return 0;
}