// Write a C program to display difference of two number on screen.

#include <iostream>
using namespace std;

int main() 
{

  int first_number, second_number, sub;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  sub = first_number - second_number;

  cout << first_number << " - " <<  second_number << " = " << sub;     

  return 0;
}