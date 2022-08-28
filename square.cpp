// Write a C Program to enter a number and calculate its square and cube.

#include<iostream>
using namespace std;

int main()
{
    int num,sqr,cub;
    cout << endl << "Enter a number:";
    cin >> num;

    sqr = num * num;
    cub = num * num * num;

    cout << endl << "The square of number: " << sqr << endl;
    cout << endl << "The cube of number: " << cub;
    
    return 0;
}