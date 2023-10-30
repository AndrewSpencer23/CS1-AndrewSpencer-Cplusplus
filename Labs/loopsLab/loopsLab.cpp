/*
    Loops Lab
    Updated By: Andrew Spencer #fixed#
    CSCI 111 
    Date: 10/15/23 #fixed#

    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void printTriangle(int height) {
    //Function takes height as an argument to print the triangle
    //of that height with *
    int row = 1;
    // row
    while (row <= height) {
        // column
        for(int col = 1; col<=row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
    cout << endl;
}


void printFlippedTriangle(int height) {
    int row = 1;
    while (row <= height) {
        for(int col = 5; col>=row; col--)
            cout << "* ";
        row += 1;
        cout << endl;
    }
cout << endl;
    /* 
    Implement the function that takes height as an argument
    and prints a triangle with * of given height.
    Triangle of height 5, e.g., should look like the following.
    * * * * *
    * * * *
    * * *
    * *
    *
    
    */
    // FIXME3 #fixed#
}

void printSquare(int height) {
    int row = 1;
    while(row<=height)  {
        int col = 5;
        for(int row = 1; row<=5; row++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
cout << endl;
/*  
FIXME4 #fixed#
Design and implement a function that takes an integer as height and
prints square of the given height with *.
Square of height 5, e.g., would look like the following.
*  *  *  *  *  
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   
*/
}


// function clears the screen system call
// NOTE: system call is not a security best practice!
void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char* argv[]) {
    // FIXME5 add a loop to make the program to continue to run until the user wants to quit

    // FIXME6 call clearScreen function to clear the screen for each round of the loop


    int height;
    cout << "Program prints geometric shapes of given height with *\n";
    cout << "Please enter the height of the shape: ";
    cin >> height;
    // call printTriangle function passing user entered height
    printTriangle(height);
    printFlippedTriangle(height);
    printSquare(height);
    

    // FIXME7 #fixed#
    // Call printFlippedTriangle passing proper argument
    // Manually test the function

    // FIXME6
    // Call the function defined in FIXME4 passing proper argument
    // Manually test the function

    // FIXME9
    // prompt user to enter y/Y to continue anything else to quit

    // FIXME10
    // Use conditional statements to break the loop or continue the loop

    return 0;
}