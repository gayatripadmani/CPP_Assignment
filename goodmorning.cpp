// Write a C program to display your name and good morning on screen.

#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << endl << "Enter Name: ";
    cin >> name;

    cout << endl << "Good Morning " << name << "...!";
    return 0;
}