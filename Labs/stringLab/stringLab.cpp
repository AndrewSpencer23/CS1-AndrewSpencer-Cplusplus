/*
Kattis - Hissing Microphone Problem

By: Andrew Spencer FIXME1 #fixed#
Date: 11/23/23 FIXME2 #fixed#

Hissing Microphone Problem Statement: https://open.kattis.com/problems/hissingmicrophone
Algorithm steps:
1. Read string
2. find "ss" substring in the string
    - if found, print "hiss"
    - otherwise, print "no hiss"
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// function prototypes
string answer(const string &line);
void testAnswer();
void solve();

void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char* argv[]) {
    clearScreen();
    if (argc == 2 and string(argv[1]) == "test")
        testAnswer();
    else
        solve();
}

string answer(const string &line) {
    // FIXME3 #fixed#
    for (size_t i = 0; i <= line.length(); i++) {
        if (line[i] == 's') {
            if (line[i+1] == 's') { 
                return "hiss";
            }
            else {
                return "no hiss";
            }
        }
    }
    // implment algorithm step 2
    // return "hiss" if ss is found in line
    // otherwise, return "no hiss"
}

// unit testing answer()
void testAnswer() {
    // FIXME4 #fixed#
    assert(answer("amiss") == "hiss");
    assert(answer("octopuses") == "no hiss");
    assert(answer("hiss") == "hiss");
    // write at least two test cases to test answer()
    cerr << "All test cases passed!\n";
}

// solving the problem for kattis
void solve() {
    string line;
    assert(line.length() <= 30);
    cout << "Please enter a phrase to be processed for hiss or no hiss: ";
    cin >> line;
    if (line.length() <= 30) {
        cout << answer(line) << endl;
    }
    else {
        cout << "Your string is too long" << endl;
    }
    // string consists of only lowercase letters (no spaces) upto 30 chars
    // FIXME5
    // read string into line
}