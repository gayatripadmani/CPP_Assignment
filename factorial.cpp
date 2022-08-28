//// WAP for calculating factorial of a entered no. ////

#include <iostream>
using namespace std;

int main()
{
    int num, i, fact=1;

    cout << endl <<"Enter the Number: ";
    cin >>num;

    for(i=num; i>=1; i--)
        fact = fact*i;

    cout << "\nFactorial = " << fact;
    cout << endl;

    return 0;
}