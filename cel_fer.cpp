#include<iostream>
using namespace std;

int main(){

    float celsius, fahrenheit;

    cout << endl << "Enter the temperature in celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0) / 5.0 * 32;

    cout << endl << "The temperature of Celsius: " << celsius;

    cout << endl << "The temperature of fahrenheit: " << fahrenheit;

    return 0;
}