// Write a C Program to enter three number from the user and find largest number by using logical operator.

#include <iostream>
using namespace std;

int main() 
{    
    float n1, n2, n3;

    cout << endl << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
        cout << endl << "Largest number: " << n1;

    if(n2 >= n1 && n2 >= n3)
        cout << endl << "Largest number: " << n2;
    
    if(n3 >= n1 && n3 >= n2)
        cout << endl << "Largest number: " << n3;
  
    return 0;
}