// Write a C program to input two number and find their sum.

#include <iostream>
using namespace std;

int main() 
{

  int first_number, second_number, sum;
    
  cout << endl << "Enter two integers: ";
  cin >> first_number >> second_number;

  sum = first_number + second_number;
  
  cout << first_number << " + " <<  second_number << " = " << sum;     

  return 0;
}