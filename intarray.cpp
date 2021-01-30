/**
 * Megan Walley
 * CPSC 298 - C++ Introduction
 * Assignment 2: Loops, Arrays & Functions
 * Problem 1: Int Array
 * 01/30/2021
 **/

#include <iostream>

using namespace std;

/**
 * Write a program that will read up to ten nonnegative integers into an array called 
 * numberArray and then write/printthe integers back to the screen(console output). 
 * For this exercise you need notuse any functions. 
 **/

int main() {
    static int ARR_SIZE = 10;
    int numberArray[ARR_SIZE];

    // loop through all of the elements and get non-negative inputs for all of them
    for (int i = 0; i < ARR_SIZE; ++i) {
        int input = -1;
        // forces a loop until the input is non-negative
        while (input < 0) {
            cout << "Please enter a non-negative integer: ";
            cin >> input;
            if (input < 0)
                cout << "Error: This is negative. Input must be non-negative." << endl;
        }
        numberArray[i] = input;
    }

    // print the array
    cout << "The ten values you selected are: ";
    for (int i = 0; i < ARR_SIZE; ++i) {
        cout << numberArray[i] << " ";
    }
    cout << endl;
    
    // delete[] numberArray;

    return 0;
}
