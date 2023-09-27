// Andrew Spencer

// HW2 (Calculating area and perimeter of triangle given 3 sides using Heron's formula)

// 09/23/23

// Included libraries
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // 1. prompt for 3 values and create variables
    float a, b, c, s, perimeter, area;

    cout << "Please enter the three sides of the triangle: ";

    cin >> a >> b >> c;

    // 2. Logic using herons formula in order to calculate area and perimeter
    if (a+c>c && b+c>a && c+a>b)  {
        s = (a+b+c)/2;
        perimeter = (a+b+c);
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "The formation of this triangle is possible" << endl;
        cout << "The perimeter of the triangle is: " << perimeter << endl;
        cout << "The area of the triangle is: " << area << endl;
    }

    // 3. If the requirements of herons formula are not met, print this
    else {
        cout << "Formation of this triangle is not possible." << endl;
    }

    // 4. final return value, in this case it is 0
    return 0;
}
