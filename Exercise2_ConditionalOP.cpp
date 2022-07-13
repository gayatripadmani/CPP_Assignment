/////////////////////// [J] Attempt the following: ///////////////////////

/* (a) Using conditional operators determine:

(1) Whether the character entered through the keyboard is a
lower case alphabet or not.

(2) Whether a character entered through the keyboard is a
special symbol or not. */

/*#include<iostream>
using namespace std;

int main()  
{  
    char ch;  
  
    cout << endl << "Enter a character: ";  
    cin >> ch; 
  
    (ch >= 97 && ch <= 122) ?  
    cout << endl << "Character entered is a lowercase English alphabet\n" :  
    cout << endl << "Character entered is not a lowercase English alphabet\n";  
  
    ( (ch >= 0  && ch <= 47) ||  (ch >= 58 && ch <= 64) ||  (ch >= 91 && ch <= 96) ||  (ch >= 123) ) ?  
      cout << endl << "Character Entered Is a Special Symbol\n" :  
      cout << endl << "Character Entered Is not a Special Symbol\n"; 

    return 0;  
}*/


//// (b) Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not. ////

/*#include<iostream>
using namespace std;

int main()
{
    int year;
 
    cout << endl << "Enter any year: ";
    cin >> year;

    (year%4==0 && year%100!=0) ? cout << endl << "LEAP YEAR" :
        (year%400 ==0 ) ? cout << endl << "LEAP YEAR" : cout << endl << "COMMON YEAR";

    return 0;
}*/


//// (c) Write a program to find the greatest of the three numbers entered through the keyboard using conditional operators. ////

#include<iostream>
using namespace std;

int main()
{
    int x, y, z, max;

    cout << endl << "Enter 1st Number: ";
    cin >> x;

    cout << endl << "Enter 2nd Number: ";
    cin >> y;

    cout << endl << "Enter 3rd Number: ";
    cin >> z;

    max = x;

    max = (max<y ? y : max);
    max = (max<z ? z : max);

    cout << endl << "Greatest Number is " << max;

}
