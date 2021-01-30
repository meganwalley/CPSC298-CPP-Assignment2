/**
 * Megan Walley
 * CPSC 298 - C++ Introduction
 * Assignment 2: Loops, Arrays & Functions
 * Problem 2: Zero Both
 * 01/30/2021
 **/

#include <iostream>

using namespace std;

/**
 * Implement a void function called zeroBoth that has two call-by-reference parameters, 
 * both of which are variables of type int, and sets thevalues of both variables to 0.
 **/
void zeroBoth(int & x, int & y);

int main() {
    int x, y;
    cout << "Please enter two numbers: ";
    cin >> x >> y;
    cout << "Your numbers were: " << x << " and " << y << "." << endl;
    zeroBoth(x, y);
    cout << "Oops! I accidentally set them to zero. See? " << x << " and " << y << "." << endl;

    return 0;
}

void zeroBoth(int & x, int & y) {
    x = 0;
    y = 0;
}
