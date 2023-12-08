// HW6
// Andrew Spencer

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

string splitPhrase(string);
void test();

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
        test(); 
    }
    else {
        string apaxPhrase;
        cin >> apaxPhrase;
        cout << splitPhrase(apaxPhrase) << endl;
    }
    return 0;
}

// How to set restrictions on the case sensitivity?
string splitPhrase(string apaxPhrase) {
    string compact_phrase = "";
    if (apaxPhrase.length() <= 250 && apaxPhrase.length() >= 1) {
        for (size_t i = 0; i < apaxPhrase.length() - 1; i++)  { 
            if (apaxPhrase[i] != apaxPhrase.at(i + 1))  {
                compact_phrase += apaxPhrase.at(i);} 
        }
        compact_phrase += apaxPhrase.at(apaxPhrase.length() - 1);
    }
    else {
        cout << "Your string cannot be processed, It is too long." << endl;
    }
    return compact_phrase; 
}

void test() {
    assert(splitPhrase("robert") == "robert");
    assert(splitPhrase("rooobert") == "robert");
    assert(splitPhrase("roooooobertapalaxxxxios") == "robertapalaxios");
    assert(splitPhrase("aaaaaaannndddrrreeewww") == "andrew");
    assert(splitPhrase("abbbbddddfffa") == "abdfa");
    cout << "All tests passed.\n";
}