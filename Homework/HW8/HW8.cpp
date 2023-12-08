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

float calcAvg(person);
void readVals(vector<person>, string);
void writeVals(vector<person>, string);

int main(int argc, char* argv[]) {

    int numLines = 0;
    vector<person> number;
    string inFileName, outFileName;

    cout << "Please enter an input file name: ";
    getline(cin, inFileName);
    readVals(number, inFileName);
    
    cout << "\n\n Please enter an output file name: ";
    getline(cin, outFileName);
    writeVals(number, outFileName);

    return 0;
}

void readVals(vector<person> &testScores, string inFileName) {
    fstream ifs;
    ifs.open(inFileName, ios_base::in);
    while(!ifs.eof()) {
        string tempString;
        person student;
        getline(ifs, tempString);
        stringstream iss(tempString);
        for(size_t i = 0; i < 6; i++) {
            string testString;
            iss >> testString;

            if(i == 0) {
                student.fName = testString;
            }
            else if(i == 1) {
                student.lName = testString;
            }
            else if(i == 2) {
                student.score1 = stoi(testString);
            }
            else if(i == 3) {
                student.score2 = stoi(testString);
            }
            else if(i == 4) {
                student.score3 = stoi(testString);
            }
            else if(i == 5) {
                student.score4 = stoi(testString);
            }
        }

    }
}
