// HW6
// Andrew Spencer

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string getString();
double splitString(string&);

int main(int argc, char* argv[])  {
    string apaxPhrase;
    string finalPhrase;
    apaxPhrase = getString();
    finalPhrase = splitString(apaxPhrase);
    string words[apaxPhrase.length()];
    return 0;
}

string getString()  {
    string phrase;
    cout << "Please enter an apaxiaaan phrase in all lowercase between 1 and 250 characters: ";
    cin >> phrase;
    return phrase;
}

double splitString(string&)  {
    string splitPhrase;
    return splitPhrase;
}