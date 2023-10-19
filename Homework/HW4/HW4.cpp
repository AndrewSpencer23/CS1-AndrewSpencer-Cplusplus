// Andrew Spencer

// HW4 ; Sum functions with conditionals

// 10-10-23

// 1. Define a function that takes 5 numbers, calculates and returns the sum of the numbers. (5 points)
// 2. Define a function that takes 5 numbers, calculates and returns the product of the numbers. (5 points)
// 3. Define a function that takes 5 numbers, calculates and returns the average of the numbers. Must call the function you defined earlier to find the sum of the five numbers. (5 points)
// 4. Define a function that takes 5 numbers, finds and returns the largest value among the numbers. Must use your own conditional statements and NOT use any built-in function. (5 points)
// 5. Define a function that takes 5 numbers, finds and returns the smallest value among the numbers. Must use your own conditional statements and NOT use any built-in function. (10 points)
// 6. Define a function that takes five numbers and returns if the floor of the sum of those numbers is even, odd or zero. (5 points)
// 7. At least one function must be templated to work on various types (5 points).
// 8. Greet the user by their name and prompt them to enter 5 numbers. (5 points)
// 9. Display menu options for each function and call the specific function based on the user's choice to calculate the result using switch statement and display the result with proper descriptions. (5 points)
// 10. Define a function called test (5*5=25 points)
// 11. For each of the functions you defined above write at least 3 automated test cases using assert statements to automatically test and verify that the functions provide correct results. 
// 12. Try to come up with corner cases (various data) to confirm the functions still provide the correct results.
// 13. Call the test function only if the “test” argument is passed to main. (5 points)

#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>

using namespace std;

void printMenu();
void getNumbers(double &, double &, double &, double &, double &);
double findSum(const double &, const double &, const double &, const double &, const double &);
double findProduct(const double &, const double &, const double &, const double &, const double &);
double findAverage(const double &, const double &, const double &, const double &, const double &);
double findLargest(const double &, const double &, const double &, const double &, const double &);
double findSmallest(const double &, const double &, const double &, const double &, const double &);
double findMod(const double &, const double &, const double &, const double &, const double &);
void test();
bool program();

void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}


int main(int argc, char* argv[])  {
        bool keepRunning = true;
    if(argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS); // exit the program
    }
    else {
        // this loop will keep the program running until user wants to quit
        while (true) {
            if (!program()) // call program
                break; // break loop if program returned false
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Enter to quit the program.\n";
    cout << "Good bye..." << endl;
    cin.get();
    return 0;
}



bool program() {
    int option = 1; // variable to store user entered option
    double num1=0, num2=0; // variables to store two numbers entered by user
    // display menu options
    printMenu();
    // Input validation
    do {
        if (cin >> option && option >= 1 && option <= 8) {
            //input is valid, break loop
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 8" << endl;
        }
    } while (true);
            
    // Call the function(s) or perform some operations based on user input
    switch(option) {
        case 1:
        {
            // get two numbers and store them into num1 and num2 using function
            getNumbers(num1, num2);
            // call findSum function; store the returned value in sum variable
            double sum = findSum(num1, num2);
            // display the result with proper description
            printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
            break;
        }
        case 2:
        {
            getNumbers(num1, num2);
            double difference = findProduct(num1, num2);
            printf("%.2f - %.2f = %.2f\n", num1, num2, difference);
            break;
        }
        case 3:
        {
            getTwoNumbers(num1, num2);
            double product = findAverage(num1, num2);
            printf("%.2f * %.2f = %.2f\n", num1, num2, product);
            break;
        }
        case 4:
        {
            getNumbers(num1, num2);
            double quotient = findLargest(num1, num2);
            printf("%.2f / %.2f = %.2f\n", num1, num2, quotient);
            break;
        }

        case 5:
        {
            // get two numbers
            getNumbers(num1, num2);
            // find the larger of the two numbers
            double max = findSmallest(num1, num2);
            // print the result
            printf("Larger between %.2f & %.2f is %.2f\n", num1, num2, max);
            break;
        }
        case 6:
        {
            getNumbers(num1, num2);
            double smaller = findMod(num1, num2);
            printf("Smaller between %.2f & %.2f is %.2f\n", num1, num2, smaller);
            break;
        }
        case 7:
        {
            getNumbers(num1, num2);
            double average = findAverage(num1, num2);
            printf("(%.2f + %.2f)/2 = %.2f\n", num1, num2, average);
            break;
        }
        case 8:
            default: // must be option 8
            return false; // exit the program
        }
    return true;
}




