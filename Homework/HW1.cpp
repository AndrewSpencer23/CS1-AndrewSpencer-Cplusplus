// Name: Andrew Spencer;

// Homework Assignment #1: Each stage of Hangman game;

// 09/10/23;

#include <iostream> //library for input and output
#include <string> //library for string data

using namespace std; //resolve cout, cin, and endl names

int main()
{   
    //FIXME3: declare a variable to store name #fixed#

    string firstName;
    string lastName;

    cout << "\nEnter your first name: \n";
    cin >> firstName;

    cout << "Enter your last name: \n";
    cin >> lastName;

    cout << "Welcome to Hangman " << firstName << " " << lastName << ", it is nice to meet you!\n" << endl;

    return 0;
}