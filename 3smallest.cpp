// Write a C Program to enter three number from the user and find smallest number.

#include <iostream>
using namespace std;

int main() {
 
    int a, b, c;
 
    cout << endl << "Enter three numbers: ";
    cin >> a >> b >> c;
 
    if (a < b && a < c) 
    {
        cout << endl << "Smallest number is " << a;
    } 
    
    else if (b < a && b < c)  
    {
        cout << endl << "Smallest number is " << b;
    } 
    else 
    {
        cout << endl << "Smallest number is "<< c;
    }
    return 0;
}