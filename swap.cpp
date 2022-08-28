// Write a C Program to Swap Two number Entered by User.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, temp;

   cout << "\nEnter the first number: ";
   cin >> num1;

   cout << "\nEnter the Second number: ";
   cin >> num2;

    cout << endl << "Before swapping." << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << endl << "\nAfter swapping." << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}