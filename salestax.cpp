/**
 * Megan Walley
 * CPSC 298 - C++ Introduction
 * Assignment 2: Loops, Arrays & Functions
 * Problem 3: Sales Tax
 * 01/30/2021
 **/

#include <iostream>

using namespace std;

/**
 * Implement a function called addTax. The function addTax has two formal parameters: 
 * taxRate(float), which is the amount of sales tax expressed as a percent; and 
 * cost(float), which is the cost of an item before tax. The function returnsthe 
 * value(float)of cost so that it includes sales tax.
 **/

float addTax(float taxRate, float cost);

int main() {
    float taxRate, cost;
    // grab value of two floats, no error checking provided
    cout << "Please enter the sales tax: ";
    cin >> taxRate;
    cout << "Please enter the cost of the item: ";
    cin >> cost;
    // return cost of item + value of sales tax on item
    cout << "The customer should be charged: " << addTax(taxRate, cost) << endl;
    return 0;
}


// this returns the tax on the item of a particular cost, plus the original cost 
// - ie, what the customer should be charged
float addTax(float taxRate, float cost) {
    return (cost + (taxRate * cost));
}
