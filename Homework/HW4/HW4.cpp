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
#include <cassert>

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

void printMenu(void) {
    cout << "\n\nMenu options:\n";
    cout << "[1] Add five numbers\n";
    cout << "[2] Multiply five numbers\n";
    cout << "[3] Average of five numbers\n";
    cout << "[4] Largest of fivec numbers\n";
    cout << "[5] Smallest of 5 numbers\n";
    cout << "[6] Find smaller of two numbers\n";
    cout << "[7] Quit the program\n";
    cout << "Enter one of the menu options [1-7]: ";
}

void getNumbers(double &n1, double &n2, double &n3, double &n4, double &n5) {
    cout << "Enter five numbers separated by a space: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
}

double findSum(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    return (n1 + n2 + n3 + n4 + n5);
}

double findProduct(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    return (n1 * n2 * n3 * n4 * n5);
}

double findAverage(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    return ((n1 + n2 + n3 + n4 + n5)/5);
}

double findLargest(const double &n1, const double &n2, const double &n2, const double &n2, const double &n2) {
    double avg = (findSum(n1, n2) / 2);
    // Note: this void function doesn't return a value but
    // the average will be stored in avg
    return avg;
}   

double findSmallest(const double &n1, const double &n2, const double &n2, const double &n2, const double &n2) {
    //find the larger of n1 and n2 and return it
    double larger = (n1 >= n2) ? n1 : n2;
    return larger;
}

double findMod(const double &n1, const double &n2, const double &n2, const double &n2, const double &n2) {
    double smaller = (n1 <= n2) ? n1 : n2;
    return smaller;
}


void test() {
    double answer = findSum(10, 12.5);
    double expected = 22.5;
    assert(answer == expected); // test case 1
    
    assert(findSum(-5, 10.5) == 5.5); // test case 2

    assert (findSum(5, 6) == 11);

    assert (findDifference(5, 6) == 1);
    assert (findDifference(4, 6) == 2);

    assert (findLarger(6, 2) == 6);
    assert (findLarger(5, 1) == 5);

    assert (findSmaller(1, 6) == 1);
    assert (findSmaller(2, 3) == 2);


    // FIXME9 – Using assert function write at least 2 test cases for each of the following functions #fixed#
    // findDifference(), findProduct(), findLarger(),
    // findSmaller(), findQuotient(), findAverage()
    printf("%s\n", "all test cases passed...");
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
            double product = findProduct(num1, num2);
            printf("%.2f - %.2f = %.2f\n", num1, num2, difference);
            break;
        }
        case 3:
        {
            getNumbers(num1, num2);
            double average = findAverage(num1, num2);
            printf("%.2f * %.2f = %.2f\n", num1, num2, product);
            break;
        }
        case 4:
        {
            getNumbers(num1, num2);
            double largest = findLargest(num1, num2);
            printf("%.2f / %.2f = %.2f\n", num1, num2, quotient);
            break;
        }

        case 5:
        {
            // get two numbers
            getNumbers(num1, num2);
            // find the larger of the two numbers
            double smallest = findSmallest(num1, num2);
            // print the result
            printf("Larger between %.2f & %.2f is %.2f\n", num1, num2, max);
            break;
        }
        case 6:
        {
            getNumbers(num1, num2);
            double mod = findMod(num1, num2);
            printf("Smaller between %.2f & %.2f is %.2f\n", num1, num2, smaller);
            break;
        }
        }
        case 7:
            default: // must be option 8
            return false; // exit the program
        }
    return true;
}




