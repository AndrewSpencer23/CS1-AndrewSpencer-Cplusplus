// Andrew Spencer

// 10/1/23

// Functions Homework, a series of useful math functions


// 8. Prompt the user to enter two numbers.
// 9. Call all the functions passing those two entered numbers and print the calculated results with proper descriptions.
// 10. Write a test function to automatically tests each function with at least two different test cases.
 
// Included libraries

#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;


// Function prototypes

double sum(float, float);
double product(float, float);
double quotient(float, float);
double negativeSubtract(float, float);
double remainder(float,float);
double exponential(float, float);
double squareroot(float);
void test();

int main()  {
    // Main int function
    // 9. Call all the functions passing those two entered numbers and print the calculated results with proper descriptions.

    test();

    // 8. Prompt the user to enter two numbers.
    int x1, x2;
    cout << "Please enter two numbers to be calculated: ";
    cin >> x1, x2;

    sum(x1, x2);

    product(x1, x2);

    quotient(x1, x2);

    negativeSubtract(x1, x2);

    remainder(x1, x2);

    exponential(x1, x2);

    squareroot(x1);

    return 0;
}

// Functions

// 1. Define a function that takes two numbers, adds two numbers and returns the sum. The function must be templated so it works for integers and floats.
double sum(float x1, float x2)  {
    int x1, x2;
    return 0.0;
}

// 2. Define a function that takes two numbers, multiplies the two numbers and returns the product. The function must be templated so it works for integers and floats
double product(float x1, float x2)   {
    int x1, x2;
    return 0.0;
}

// 3. Define a function that takes two numbers; divides the first number by the second and returns the quotient. The function must be templated so it works for integers and floats.
double quotient(float x1, float x2)   {
    int x1, x2;
    return 0.0;
}

// 4. Define a function that takes two numbers, subtracts the second from the first and returns the difference. The function must be templated so it works for integers and floats.
double negativeSubtract(float x1, float x2)   {
    int x1, x2;
    return 0.0;
}

// 5. Define a function that takes two numbers, finds and returns the remainder of the first number divided by the second. The function must be templated so it works for integers and floats.
double remainder(float x1, float x2)   {
    int x1, x2;
    return 0.0;
}

// 6. Define a function that takes two numbers, finds the first to the power of the second number and returns the result. The function must be templated so it works for integers and floats
double exponential(float x1, float x2)   {
    int x1, x2;
    return 0.0;
}

// 7. Define a function that takes a number and returns the square-root of the number. The function must be templated so it works for integers and floats.
double squareroot(float x1)   {
    int x1;
    return 0.0;
}

void test()  {
    
}
