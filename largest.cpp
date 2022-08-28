// Write a C Program to enter two number from the user and find largest number.

#include <iostream>
using namespace std;

int main() 
{    
    float n1, n2;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2;

    if(n1 >= n2)
        cout << "Largest number: " << n1;

    else
        cout << "Largest number: " << n2;
  
    return 0;
}