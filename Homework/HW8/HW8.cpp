// HW8
// Andrew Spencer

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "csci112in.txt"
#include "csci112out.txt"

using namespace std;

int countLines(fstream&);
void readVals(fstream&, int);
double calcAvg();
void writeVals();

int main(int argc, char* argv[]) {
    int numLines = 0;
    fstream fs;
    fs.open("csci112in.txt", ios_base::in);
    numLines = countLines(fs);

    fs.close();
    return 0;
}

int countLines(fstream& fs, int numLines) {
    return numLines;
}