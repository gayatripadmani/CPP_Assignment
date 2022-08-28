#include<iostream>
using namespace std;

int main(){

    float len, width,  area, perimeter;

    cout << endl << "Enter the Length of Rectangle: ";
    cin >> len;

    cout << endl << "Enter the Width of Rectangle: ";
    cin >> width;

    area = len * width;

    perimeter = 2 * (len + width);

    cout << endl << "Area of the Rectabgle: " << area;

    cout << endl << "Perimeter of the Rectangle: " << perimeter;
}