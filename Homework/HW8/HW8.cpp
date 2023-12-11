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

void readVals(vector<person> &testScores, string inFileName);
void writeVals(vector<person> &testScores, string outFileName);

float averageScore1(vector<person> &testScores);
float averageScore2(vector<person> &testScores);
float averageScore3(vector<person> &testScores);
float averageScore4(vector<person> &testScores);
float findMeanScore(person student);

float locateMaximumScore1(vector<person> &testScores);
float locateMaximumScore2(vector<person> &testScores);
float locateMaximumScore3(vector<person> &testScores);
float locateMaximumScore4(vector<person> &testScores);

float locateMinimumScore1(vector<person> &testScores);
float locateMinimumScore2(vector<person> &testScores);
float locateMinimumScore3(vector<person> &testScores);
float locateMinimumScore4(vector<person> &testScores);

int main(int argc, char* argv[]) {

    int numLines = 0;
    vector<person> number;
    string inFileName;
    string outFileName;

    cout << "Please enter an input file name: ";
    getline(cin, inFileName);
    readVals(number, inFileName);
    
    cout << "\nPlease enter an output file name: ";
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
        float gradeAvg = ((student.score1 + student.score2 + student.score3 + student.score4)/4);
        if(gradeAvg <= 100 && gradeAvg >= 90) {
            student.letterGrade = 'A';
        }
        else if(gradeAvg <= 90 && gradeAvg >= 80) {
            student.letterGrade = 'B';
        }
        else if(gradeAvg <= 80 && gradeAvg >= 70) {
            student.letterGrade = 'C';
        }
        else if(gradeAvg <= 70 && gradeAvg >= 60) {
            student.letterGrade = 'D';
        }
        else if(gradeAvg <= 59 && gradeAvg >= 0) {
            student.letterGrade = 'F';
        }

        testScores.push_back(student);
    }
    ifs.close();
}

void writeVals(vector<person> &testScores, string outFileName) {
    fstream ofs;
    person student;
    int numAs, numBs, numCs, numDs, numFs = 0;
    for(person student:testScores) {
        if((student.letterGrade = 'A')) {
            numAs + 1;
        }
        else if((student.letterGrade = 'B')) {
            numBs + 1;
        }
        else if((student.letterGrade = 'C')) {
            numCs + 1;
        }
        else if((student.letterGrade = 'D')) {
            numDs + 1;
        }
        else if((student.letterGrade = 'F')) {
            numFs + 1;
        }
    }
    ofs.open(outFileName, ios_base::out);
    ofs << "===================================================================================\nFName    LName    Test1      Test2      Test3     Test4    Grade\n===================================================================================\n";
    for(person student:testScores) {
        ofs << left << setw(10) << student.fName << setw(10) << student.lName << setw(10) << student.score1 << setw(10) << student.score2 << setw(10) << student.score3 << setw(10) << student.score4 << setw(6) << student.letterGrade << endl;
    }
    ofs << "**********************************************************************************" << endl;
    ofs << "Class Average Score:   " << left << setw(8) << averageScore1(testScores) << setw(8) << averageScore2(testScores) << setw(8) << averageScore3(testScores) << setw(8) << averageScore4(testScores) << endl;
    ofs << "Class Maximum Score:   " << locateMaximumScore1(testScores) << setw(8) << locateMaximumScore2(testScores) << setw(8) << locateMaximumScore3(testScores) << setw(8) << locateMaximumScore4(testScores) << endl;
    ofs << "Class Minimum Score:   " << locateMinimumScore1(testScores) << setw(8) << locateMinimumScore2(testScores) << setw(8) << locateMinimumScore3(testScores) << setw(8) << locateMinimumScore4(testScores) << endl;
    ofs << "**********************************************************************************" << endl;
    ofs << "Total As:   " << left << setw(8) << numAs << endl;
    ofs << "Total Bs:   " << left << setw(8) << numBs << endl;
    ofs << "Total Cs:   " << left << setw(8) << numCs << endl;
    ofs << "Total Ds:   " << left << setw(8) << numDs << endl;
    ofs << "Total Fs:   " << left << setw(8) << numFs << endl;
}

float averageScore1(vector<person> &testScores) {
    float averageScore = 0;
    for(person student:testScores) {
        averageScore += student.score1;
    }
    averageScore = averageScore/testScores.size();
    return averageScore;
}

float averageScore2(vector<person> &testScores) {
    float averageScore = 0;
    for(person student:testScores) {
        averageScore += student.score2;
    }
    averageScore = averageScore/testScores.size();
    return averageScore;
}

float averageScore3(vector<person> &testScores) {
    float averageScore = 0;
    for(person student:testScores) {
        averageScore += student.score3;
    }
    averageScore = averageScore/testScores.size();
    return averageScore;
}

float averageScore4(vector<person> &testScores) {
    float averageScore = 0;
    for(person student:testScores) {
        averageScore += student.score4;
    }
    averageScore = averageScore/testScores.size();
    return averageScore;
}

float findMeanScore(person student) {
    float meanScore;
    meanScore = ((student.score1 + student.score2 + student.score3 + student.score4)/4);
    return meanScore;
}

float locateMinimumScore1(vector<person> &testScores) {
    float minimumTestScore;
    minimumTestScore = testScores[0].score1;
    for(person student:testScores) {
        minimumTestScore = (student.score1 < minimumTestScore) ? student.score1:minimumTestScore;
    }
    return minimumTestScore;
}

float locateMinimumScore2(vector<person> &testScores) {
    float minimumTestScore;
    minimumTestScore = testScores[0].score2;
    for(person student:testScores) {
        minimumTestScore = (student.score2 < minimumTestScore) ? student.score2:minimumTestScore;
    }
    return minimumTestScore;
}

float locateMinimumScore3(vector<person> &testScores) {
    float minimumTestScore;
    minimumTestScore = testScores[0].score3;
    for(person student:testScores) {
        minimumTestScore = (student.score3 < minimumTestScore) ? student.score3:minimumTestScore;
    }
    return minimumTestScore;
}

float locateMinimumScore4(vector<person> &testScores) {
    float minimumTestScore;
    minimumTestScore = testScores[0].score4;
    for(person student:testScores) {
        minimumTestScore = (student.score4 < minimumTestScore) ? student.score4:minimumTestScore;
    }
    return minimumTestScore;
}

float locateMaximumScore1(vector<person> &testScores) {
    float maximumTestScore;
    maximumTestScore = testScores[0].score1;
    for(person student:testScores) {
        maximumTestScore = (student.score1 < maximumTestScore) ? student.score1:maximumTestScore;
    }
    return maximumTestScore;
}

float locateMaximumScore2(vector<person> &testScores) {
    float maximumTestScore;
    maximumTestScore = testScores[0].score2;
    for(person student:testScores) {
        maximumTestScore = (student.score2 < maximumTestScore) ? student.score2:maximumTestScore;
    }
    return maximumTestScore;
}

float locateMaximumScore3(vector<person> &testScores) {
    float maximumTestScore;
    maximumTestScore = testScores[0].score3;
    for(person student:testScores) {
        maximumTestScore = (student.score3 < maximumTestScore) ? student.score3:maximumTestScore;
    }
    return maximumTestScore;
}

float locateMaximumScore4(vector<person> &testScores) {
    float maximumTestScore;
    maximumTestScore = testScores[0].score4;
    for(person student:testScores) {
        maximumTestScore = (student.score4 < maximumTestScore) ? student.score4:maximumTestScore;
    }
    return maximumTestScore;
}
