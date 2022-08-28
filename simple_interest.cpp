#include<iostream>
using namespace std;

int main(){
    int p, t, r, SI;

    //Asking for input
    cout << endl << "Enter the principal amount: ";
    cin >> p;

    cout << endl << "Enter the time period (in years): ";
    cin >> t;

    cout << endl << "Enter the rate of interest: ";
    cin >> r;

    //Calculating simple interest

    SI = (p * t * r) / 100;

    //Displaying output
    cout << endl << "Simple INterest: " << SI << endl;
}