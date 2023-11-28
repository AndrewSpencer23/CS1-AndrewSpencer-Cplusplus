// HW6
// Andrew Spencer

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string splitPhrase(string);
void testPhrase();

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
    if (argc > 1 && string(argv[1]) == "test") {
        testPhrase(); 
    }
    else {
        string apaxPhrase;
        cout << "Please enter an Apaxian phrase in all lowercase letters to be processed and compacted: ";
        cin >> apaxPhrase;
        cout << "\nYour compacted phrase is: " << splitPhrase(apaxPhrase) << "\n";
    }
    return 0;
}

string splitPhrase(string apaxPhrase) {
    string compact_phrase = "";
    for (int i = 0; i < apaxPhrase.length(); i++)  { 
        if (apaxPhrase[i] != apaxPhrase[i + 1])  {
                compact_phrase += apaxPhrase[i]; } 
        } 
    return compact_phrase; 
}

void testPhrase() {
    assert(splitPhrase("robert") == "robert");
    assert(splitPhrase("rooobert") == "robert");
    assert(splitPhrase("roooooobertapalaxxxxios") == "robertapalaxios");
    assert(splitPhrase("aaaaaaannndddrrreeewww") == "andrew");
    assert(splitPhrase("abbbbddddfffa") == "abdfa");
    cout << "All tests passed.\n";
}