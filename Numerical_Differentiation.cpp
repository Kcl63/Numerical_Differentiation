// Numerical_Differentiation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>
#define h .0001
float square(float a) {
    return a * a;
}
//calculate the slope at a localized place for a small change in input

// Function that takes a pointer
// to a function
float slope_at_a_point(float x, float (*func)(float) )
{   //derivative
    float d = (func(h + x) - func(x)) / h;
    return d;
}

int main()
{
    cout << "Square of 3 " << square(3);
    cout << " Slope of square of three at 3 " << slope_at_a_point(3, &square);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
