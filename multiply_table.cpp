//// WAP for printing multiplication table of entered no by the user. ////

#include <iostream>
using namespace std;
 
int main()
{
    int num=0, i;
 
    cout << endl <<"Enter number to print table: ";
    cin>>num;
    for(i=1; i<=10; i++)
    {
       cout << endl << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
 
}