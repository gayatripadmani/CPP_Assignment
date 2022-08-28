// Write a C program to display multiplication of two number on screen.

#include <iostream>
using namespace std;

int main() {
  double num1, num2, mul;

  cout << endl << "Enter two numbers: ";
  cin >> num1 >> num2;
 
  mul = num1 * num2;  

  cout << endl << "Multiplication = " << mul;    
    
  return 0;
}