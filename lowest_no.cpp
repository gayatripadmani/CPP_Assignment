#include<iostream>
using namespace std;

int main(){
    
    int a, b;

    cout << endl << "Enter two number to find smallest...\n";

    cout << endl << "Enter first number: ";
    cin >> a;

    cout << endl << "Enter second number: ";
    cin >> b;

    cout << endl <<"You enterd: " << endl << endl << "First number: " << a << "\n" << "Second number: " << b << endl;

    if(a < b){
        cout << endl << a << " is smaller than " << b;
    }

    else if(a > b){
        cout  << endl << b << " is smaller than " << a;
    }

    else{
        cout  << endl << "both are equal";
    }

    return 0;
}