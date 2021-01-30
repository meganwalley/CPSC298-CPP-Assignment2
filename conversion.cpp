/**
 * Megan Walley
 * CPSC 298 - C++ Introduction
 * Assignment 2: Loops, Arrays & Functions
 * Problem 4: Conversion
 * 01/30/2021
 **/

#include <iostream>

using namespace std;

/**
 * Write a program that will read in a length in feet and inches and output the 
 * equivalent length in meters and centimeters. Use at least threefunctions: one for 
 * user input,one or more for calculating, and one for output(console). Include a loop 
 * that lets the user repeat this computation for new input values until the user says 
 * he or she wants to end the program(user has to type exit). There are 0.3048 meters 
 * in a foot, 100 centimeters in a meter, and 12 inches in a foot.
 **/

// function declarations
void user_input(float & feet, float & inches);
void calculate(float feet, float inches, int & meters, float & centimeters);
void output(int meters, float centimeters, string & want_to_end);


int main() {
    string want_to_end = "go";
    float feet, inches, centimeters;
    int meters;
    //read in length in feet and inches, output in meters and centimeters;
    cout << "======================================================" << endl
         << "Conversion" << endl
         << "Translating feet and inches to meters and centimeters!" << endl
         << "=====================================" << endl;
    while (want_to_end != "exit" && want_to_end != "quit" && want_to_end != "stop" && want_to_end != "no") {
        user_input(feet, inches);
        calculate(feet, inches, meters, centimeters);
        output(meters, centimeters, want_to_end);
    }
    cout << "Goodbye!" << endl
         << "======================================================" << endl;
    return 0;
}


void user_input(float & feet, float & inches) {
    cout << "Enter a length:" << endl 
         << "  Number of feet:   ";
    cin >> feet;
    cout << "  Number of inches: ";
    cin >> inches;
}

void calculate(float feet, float inches, int & meters, float & centimeters) {
    feet += inches / 12; 
    centimeters = feet * 0.3048 * 100;
    meters = centimeters / 100;
    centimeters -= meters * 100;
}

void output(int meters, float centimeters, string & want_to_end) {
    cout << "That translates to: "                  << endl
         << "  Meters:           " << meters        << endl
         << "  Centimeters:      " << centimeters   << endl
         << "=====================================" << endl
         << "Type \'exit\' to close the program."   << endl
         << "otherwise, type anything to continue " << endl
         << "converting distances and lengths:"     << endl;
    cin >> want_to_end;
    cout << "=====================================" << endl;

}


