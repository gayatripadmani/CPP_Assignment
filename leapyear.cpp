// Write a C Program to enter any year and check it leap year or not.

#include <iostream>
using namespace std;

int main() 
{

  int year;
  
  cout << endl << "Enter a year: ";
  cin >> year;
  
  if (year % 400 == 0) 
  {
    cout << endl << year << " is a leap year.";
  }

  else if (year % 100 == 0) 
  {
    cout << endl  << year << " is not a leap year.";
  }
  
  else if (year % 4 == 0) 
  {
    cout << endl  << year << " is a leap year.";
  }
  
  else 
  {
    cout << endl  << year << " is not a leap year.";
  }

  return 0;
}