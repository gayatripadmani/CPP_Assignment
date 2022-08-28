// Write a C Program to Add, Subtract, Multiply, and Divide two number entered by user.

#include<iostream>
using namespace std;
int main()
{
  // declare variables
  double num1, num2;

  // take input from end-user
  cout << endl << "Enter two Number 1: ";
  cin >> num1;

  cout << endl << "Enter two Number 2: ";
  cin >> num2;

  // addition of two number
  cout << endl << num1 << "+" << num2 << " = "<< num1+num2 << endl;

  // subtraction of two number
  cout << endl << num1 << "-" << num2 << " = "<< num1-num2 << endl;

  // multiplication of two number
  cout << endl << num1 << "*" << num2 << " = "<< num1*num2 << endl;

  // division of two number
  cout << endl << num1 << "/" << num2 << " = "<< num1/num2 << endl;

  return 0;
}