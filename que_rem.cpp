// Write a C Program to Find Quotient and Remainder of two Integer Entered by User.

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