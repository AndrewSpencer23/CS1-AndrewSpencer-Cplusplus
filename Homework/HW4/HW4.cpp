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
        cout << "\n\nAll test cases passed";
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
    cout << "[4] Largest of five numbers\n";
    cout << "[5] Smallest of 5 numbers\n";
    cout << "[6] Find whether sum of five numbers is even\n";
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
// I was stuck, so I went to stack overflow and it pointed me in this direction shown below.
double findLargest(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    double largest;
        if ((n1>n2) and (n1>n3) and (n1>n4) and (n1>n5))
        {    
            largest = n1;
        }
        else if ((n2>n1) and (n2>n3) and (n2>n4) and (n2>n5))
        {    
            largest = n2;
        }
        else if ((n3>n1) and (n3>n2) and (n3>n4) and (n3>n5))
        {    
            largest = n3;
        }
        else if ((n4>n1) and (n4>n2) and (n4>n3) and (n4>n5))
        {    
            largest = n4;
        }
        else 
        {
        largest= n5;
        }
    return largest;
}

// I was stuck, so I went to stack overflow and it pointed me in this direction shown below.
double findSmallest(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    double smallest;
        if ((n1 < n2) and (n1<n3) and (n1<n4) and (n1<n5))
        {    
            smallest = n1;
        }
        else if ((n2<n1) and (n2<n3) and (n2<n4) and (n2<n5))
        {    
            smallest = n2;
        }
        else if ((n3<n1) and (n3<n2) and (n3<n4) and (n3<n5))
        {    
            smallest = n3;
        }
        else if ((n4<n1) and (n4<n2) and (n4<n3) and (n4<n5))
        {    
            smallest = n4;
        }
        else 
        {
        smallest = n5;
        }
    return smallest;
}
double findMod(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5) {
    int firstsum = findSum(n1, n2, n3, n4, n5);
    int second = 2;
    int mod = firstsum%second;
    if (mod == 0) {
        return true;
    }
    else {
        return false;
    }
}


void test() {
    double answer = findSum(10, 12.5, 1, 2, 3);
    double expected = 28.5;
    assert(answer == expected);
    
    double answer2 = findSum(10, 12.5, 1, 2, 4);
    double expected2 = 29.5;
    assert(answer2 == expected2);

    double answer3 = findProduct(10, 10, 1, 2, 10);
    double expected3 = 2000;
    assert(answer3 == expected3);

    double answer4 = findProduct(1, 1, 1, 1, 2);
    double expected4 = 2;
    assert(answer4 == expected4);

    double answer5 = findAverage(10, 10, 10, 10, 10);
    double expected5 = 10;
    assert(answer5 == expected5);

    double answer6 = findAverage(1, 1, 1, 1, 1);
    double expected6 = 1;
    assert(answer6 == expected6);

    double answer7 = findSmallest(10, 12.5, 1, 2, 3);
    double expected7 = 1;
    assert(answer7 == expected7);

    double answer8 = findSum(11, 12.5, 1, 2, 4);
    double expected8 = 30.5;
    assert(answer8 == expected8);

    printf("%s\n", "all test cases passed...");
}


bool program() {
    int option = 1;
    double num1=0, num2=0, num3=0, num4=0, num5=0;
    printMenu();
    do {
        if (cin >> option && option >= 1 && option <= 7) {
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a value between 1 and 7" << endl;
        }
    } while (true);
            
    switch(option) {
        case 1:
        {
            // get two numbers and store them into num1 and num2 using function
            getNumbers(num1, num2, num3, num4, num5);
            // call findSum function; store the returned value in sum variable
            double sum = findSum(num1, num2, num3, num4, num5);
            // display the result with proper description
            printf("%.2f + %.2f + %.2f + %.2f + %.2f = %.2f\n", num1, num2, num3, num4, num5, sum);
            break;
        }
        case 2:
        {
            getNumbers(num1, num2, num3, num4, num5);
            double product = findProduct(num1, num2, num3, num4, num5);
            printf("%.2f * %.2f * %.2f * %.2f * %.2f = %.2f\n", num1, num2, num3, num4, num5, product);
            break;
        }
        case 3:
        {
            getNumbers(num1, num2, num3, num4, num5);
            double average = findAverage(num1, num2, num3, num4, num5);
            printf("The average of %.2f, %.2f, %.2f, %.2f, %.2f = %.2f\n", num1, num2, num3, num4, num5, average);
            break;
        }
        case 4:
        {
            getNumbers(num1, num2, num3, num4, num5);
            double largest = findLargest(num1, num2, num3, num4, num5);
            printf("Largest between %.2f, %.2f, %.2f, %.2f, %.2f is %.2f\n", num1, num2, num3, num4, num5, largest);
            break;
        }

        case 5:
        {
            getNumbers(num1, num2, num3, num4, num5);
            double smallest = findSmallest(num1, num2, num3, num4, num5);
            printf("Smallest between %.2f, %.2f, %.2f, %.2f, %.2f is %.2f\n", num1, num2, num3, num4, num5, smallest);
            break;
        }
        case 6:
        {
            getNumbers(num1, num2, num3, num4, num5);
            double mod = findMod(num1, num2, num3, num4, num5);
            printf("if %.2f is a whole number, the sum is positive\n", num1, num2, num3, num4, num5, mod);
            break;
        }
        case 7:
            default:
            return false; // exit the program
        }
    return true;
}




