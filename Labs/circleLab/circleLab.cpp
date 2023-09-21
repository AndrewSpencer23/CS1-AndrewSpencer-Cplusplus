// Andrew Spencer

// 09/17/23

// Area and circumference of circle given radius

//Included libraries:
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std; // resolve cout, cin, and endl names

string promptName();

void greetUser(string);

float getValues (float&);

float calcArea (float);

int main() {
    string fullName;
    fullName = promptName();
    greetUser(fullName);

    float radius;
    radius = getValues(radius);
    
    float area;
    area = calcArea(radius);
    cout << "The area of a circle with radius " << radius << " is equal to: " << area << endl << endl << endl;
    
    return 0;
}

string promptName() {
    string fullName;
    cout << "Please enter your full name:\n";
    getline(cin, fullName);
    return fullName;                                                                      
}

void greetUser(string fullName) {
    cout << "\nWelcome: " << fullName << " to my circle calculator!\n" << endl;
}

float getValues (float&) {
    float radius;
    cout << "Enter a radius to be calculated: ";
    cin >> radius >> endl;
    return radius;
}

float calcArea (float radius)  {
    float area;
    area = M_PI * pow(radius, 2);
    return area;
}