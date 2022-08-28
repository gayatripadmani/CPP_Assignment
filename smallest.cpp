// Write s C Program to enter two number from the user and find smallest number.

#include <iostream>
using namespace std;

int main()
{
    int a, b, small;
    cout << endl << "Enter any two number: ";
    cin >> a >> b;

    if(a<b)
        small = a;
    else
        small = b;
    
    cout << endl << "Smallest of the two number is: " << small;
    
    return 0;
}