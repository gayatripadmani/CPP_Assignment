#include<iostream>
using namespace std;

int main(){

    float len, breadth,  area, perimeter;

    cout << endl << "Enter the Length of Rectangle: ";
    cin >> len;

    cout << endl << "Enter the breadth of Rectangle: ";
    cin >> breadth;

    area = len * breadth;

    perimeter = 2 * (len + breadth);

    cout << endl << "Area of the Rectabgle: " << area;

    cout << endl << "Perimeter of the Rectangle: " << perimeter;
}
