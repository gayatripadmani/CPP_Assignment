// Write a C program to display division of two number on screen.

#include <iostream>
using namespace std;

int main()
{    
    int divisor, dividend, quotient, remainder;

    cout << endl << "Enter dividend: ";
    cin >> dividend;

    cout << endl << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << endl << "Quotient = " << quotient << endl;
    cout << endl << "Remainder = " << remainder;

    return 0;
}