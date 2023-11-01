/*  Andrew Spencer

    HW5 Guess The Number Program

    10/20/23

    CS1 - Bergen

1. Write programmer and program information at the top of the source file as comments. #fixed#
2. Write algorithm steps at the top of the program as comments. (10 points) #fixed#
3. Your program will ask the player's name and greet the player. (5 points) #fixed#
4. Define a function called randomNumber that generates and returns a random number between 1 and 20. (5 points)
5. Define a function called readNumber that prompts the user to take a guess and return the guessed number. (10 points)
6. You must validate the guessed number to be between 1 and 20.
7. Define a function called checkGuess that takes two integers compares the two numbers and returns the following result: (10 points)
8. returns 0 if the numbers are equal
9. returns -1 if the first number is less than second
10. returns 2 otherwise
11. Write 3 test cases for checkGuess function using assert statement. (10 points)
12. Define a function called game that implements the logic of the guess the number game. (25 points)
13. Call the randomNumber function defined above to generate a random number for the user to guess for each game.
  Until the game is over, your program will ask the player to guess the number using the readNumber function defined above.
  Use the function defined above called checkGuess to compare the user entered number with the hidden random number.
  If the player guesses the number within six tries, the game is over and the player wins.
  If the player can't guess the number within six tries, the game is over and the player loses.
  For every wrong guess, your program informs the player whether the guess is too high or too low by calling checkGuess function.

When the game is over, your program will inform whether the player won or lost the game and reveal the secret random number picked by the computer, especially if they lose. (5 points)
Your game will continue to run until the user wants to quit when the game is over. (10 points)
Bonus (10 points): When the user quits the program/game, your program provides the following stats of the player:
number of times played
percentage of times won
percentage of times lost */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int getName();

int main(int argc, char* argv[]) {
    getName();
    return 0;
}

int getName()  {
    string fName;
    cout << "Please enter your full name: ";
    getline(cin, fName);
    cout << "Welcome to the program " << fName << ", it is nice to meet you!" << endl;
    return 0;
}

