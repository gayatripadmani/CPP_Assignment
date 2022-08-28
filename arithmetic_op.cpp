// Write a C program to display arithmetic operations of two number on screen.

#include<iostream>
using namespace std;    

int main() 
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    cout << endl << "Enter first number : ";
    cin >> num1;
    
    cout << endl << "Enter second number : ";
    cin >> num2;
    
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    mod = num1 % num2;
    div = (float)num1 / num2;

    cout << endl << "Sum of number1 and number2 : " << sum;
    cout << endl << "Difference of number1 and number2 : " << sub;
    cout << endl << "Product of number1 and number2 : " << mult;
    cout << endl << "Modulus of number1 and number2 : " << mod;
    cout << endl << "Quotient of number1 and number2 : " << div;
    
    return 0;
}