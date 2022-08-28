//  Write s C Program to enter any number and check it is positive, negative or zero.

#include <iostream>
using namespace std;

int main()
{
    int num1;
    
    cout << endl << "Enter the number :";
    cin>>num1;
    
    if(num1 > 0)
    {
    cout << endl << num1 <<" is a positive number";
    }

    else if(num1 < 0)
    {
        cout << endl << num1 <<" is a Negative number";
    }
    else
    {
        cout<< endl <<"You entered Zero";
    }
    return 0;
}