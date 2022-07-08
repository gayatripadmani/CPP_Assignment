#include<iostream>
using namespace std;

int main(){

    float len, area, perimeter;

    cout << endl << "Enter the Length of Square: ";
    cin >> len;

    area = len * len;

    perimeter = 4 * len;

    cout << endl << "Area of the Square: " << area;

    cout << endl << "Perimeter of the Square: " << perimeter;
}