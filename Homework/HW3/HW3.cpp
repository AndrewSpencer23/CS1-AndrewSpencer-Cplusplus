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
#include <cstdio>

using namespace std;


// Function prototypes

double sum(float, float);
double product(float, float);
double quotient(float, float);
double negativeSubtract(float, float);
double exponential(float, float);
double squareroot(float);
void test();

const float epsilon = 1e-5;

int main()  {
    // Main int function
    // 9. Call all the functions passing those two entered numbers and print the calculated results with proper descriptions.

    test();

    // 8. Prompt the user to enter two numbers.
    float x1, x2;
    cout << "\nPlease enter two numbers to be calculated in the form # #:  ";
    cin >> x1 >> x2;
    

    float sumprint;
    float productprint;
    float quotientprint;
    float negativeprint;
    float exprint;
    float sqrtprint;

    sumprint = sum(x1, x2);
    cout << "\nThe sum of the two numbers is: " << sumprint << endl;

    productprint = product(x1, x2);
    cout << "\nThe product of the two numbers is: " << productprint << endl;

    quotientprint = quotient(x1, x2);
    cout << "\nThe quotient of the two numbers is: " << quotientprint << endl;

    negativeprint = negativeSubtract(x1, x2);
    cout << "\nThe difference of the two numbers is: " << negativeprint << endl;


    exprint = exponential(x1, x2);
    cout << "\nThe exponentiation of the two numbers is: " << exprint << endl;

    sqrtprint = squareroot(x1);
    cout << "\nThe square root of the first numbers is: " << sqrtprint << endl;

    cout << "\nThank you for using my calculator! have a good day.\n" << endl;

    return 0;
}

// Functions

// 1. Define a function that takes two numbers, adds two numbers and returns the sum. The function must be templated so it works for integers and floats.
double sum(float x1, float x2)  {
    float sum1;
    sum1 = (x1 + x2);
    return sum1;
}

// 2. Define a function that takes two numbers, multiplies the two numbers and returns the product. The function must be templated so it works for integers and floats
double product(float x1, float x2)   {
    float product1;
    product1 = (x1*x2);
    return product1;
}

// 3. Define a function that takes two numbers; divides the first number by the second and returns the quotient. The function must be templated so it works for integers and floats.
double quotient(float x1, float x2)   {
    float quotient1;
    quotient1 = (x1/x2);
    return quotient1;
}

// 4. Define a function that takes two numbers, subtracts the second from the first and returns the difference. The function must be templated so it works for integers and floats.
double negativeSubtract(float x1, float x2)   {
    float negativeSubtract1;
    negativeSubtract1 = (x2-x1);
    return negativeSubtract1;
}


// 6. Define a function that takes two numbers, finds the first to the power of the second number and returns the result. The function must be templated so it works for integers and floats
double exponential(float x1, float x2)   {
    int exp;
    exp = pow(x1, x2);
    return exp;
}

// 7. Define a function that takes a number and returns the square-root of the number. The function must be templated so it works for integers and floats.
double squareroot(float x1)   {
    int squareroot1;
    squareroot1 = sqrt(x1);
    return squareroot1;
}

void test()  {
    float result1 =  sum(7, 6);
    float expected1 = 13;
    assert( fabs(result1 - expected1) == 0);

    cerr << "All test cases passed." << endl;
}
