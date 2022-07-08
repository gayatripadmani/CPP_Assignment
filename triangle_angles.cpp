#include<iostream>
using namespace std;

int main(){
    
    int a, b, c;

    cout << endl << "Enter three angle of a triangle: ";
    cin >> a >> b >> c;
    
    int sum = a + b +c;

    if(sum == 180 && a != 0 && b != 0 && c != 00){
        cout << endl << "The triangle is valid";
    }
    else{
        cout << endl << "The triangle is invalid";
    }

    return 0;
}