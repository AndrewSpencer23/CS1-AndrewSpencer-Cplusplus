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
    int score1, score2, score3, score4;
    char letterGrade;
};

float calcAvg(person);
void readVals(vector<person>, string);
void writeVals(vector<person>, string);
float averageScore1(vector<person>);
float averageScore2(vector<person>);
float averageScore3(vector<person>);
float averageScore4(vector<person>);

int main(int argc, char* argv[]) {

    int numLines = 0;
    vector<person> number;
    string inFileName;
    string outFileName;

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
                if(student.score1 <= 100 && student.score1 >= 90) {
                    student.letterGrade = 'A';
                }
                else if(student.score1 <= 90 && student.score1 >= 80) {
                    student.letterGrade = 'B';
                }
                else if(student.score1 <= 80 && student.score1 >= 70) {
                    student.letterGrade = 'C';
                }
                else if(student.score1 <= 70 && student.score1 >= 60) {
                    student.letterGrade = 'D';
                }
                else if(student.score1 <= 59 && student.score1 >= 0) {
                    student.letterGrade = 'F';
                }
                
            }
            else if(i == 3) {
                student.score2 = stoi(testString);
                if(student.score2 <= 100 && student.score2 >= 90) {
                    student.letterGrade = 'A';
                }
                else if(student.score2 <= 90 && student.score2 >= 80) {
                    student.letterGrade = 'B';
                }
                else if(student.score2 <= 80 && student.score2 >= 70) {
                    student.letterGrade = 'C';
                }
                else if(student.score2 <= 70 && student.score2 >= 60) {
                    student.letterGrade = 'D';
                }
                else if(student.score2 <= 59 && student.score2 >= 0) {
                    student.letterGrade = 'F';
                }
            }
            else if(i == 4) {
                student.score3 = stoi(testString);
                if(student.score3 <= 100 && student.score3 >= 90) {
                    student.letterGrade = 'A';
                }
                else if(student.score3 <= 90 && student.score1 >= 80) {
                    student.letterGrade = 'B';
                }
                else if(student.score3 <= 80 && student.score3 >= 70) {
                    student.letterGrade = 'C';
                }
                else if(student.score3 <= 70 && student.score3 >= 60) {
                    student.letterGrade = 'D';
                }
                else if(student.score3 <= 59 && student.score3 >= 0) {
                    student.letterGrade = 'F';
                }
            }
            else if(i == 5) {
                student.score4 = stoi(testString);
                if(student.score4 <= 100 && student.score4 >= 90) {
                    student.letterGrade = 'A';
                }
                else if(student.score4 <= 90 && student.score4 >= 80) {
                    student.letterGrade = 'B';
                }
                else if(student.score4 <= 80 && student.score4 >= 70) {
                    student.letterGrade = 'C';
                }
                else if(student.score4 <= 70 && student.score4 >= 60) {
                    student.letterGrade = 'D';
                }
                else if(student.score4 <= 59 && student.score4 >= 0) {
                    student.letterGrade = 'F';
                }
            }
        }
        testScores.push_back(student);
        ifs.close();
    }
}

void writeVals(vector<person> &testScores, string outFileName) {
    fstream ofs;
    person student;
    ofs.open(outFileName, ios_base::out);
}
