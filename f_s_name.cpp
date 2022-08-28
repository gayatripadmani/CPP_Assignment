// Write a C program to display your name, father name and surname on different lines on screen.

#include <iostream>
using namespace std;

int main()
{
    string name, fname, sname;

    cout << endl << "Enter Name: ";
    cin >> name;

    cout << endl << "Enter Father Name: ";
    cin >> fname;

    cout << endl << "Enter Surname Name: ";
    cin >> sname;

    cout << endl << name << " " << fname << " " << sname;
    return 0;
}