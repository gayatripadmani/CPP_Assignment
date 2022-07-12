//// WAP for printing fibonacci series:   1,1,2,3,5,8,13,21,….   Up till n digits in series. ////

#include<iostream>
using namespace std;

int main()
{
    int n1=0, n2=1, i, n, sum=0;
    cout << endl << "Enter the number of terms: ";   
    cin >> n;

    cout << endl <<"Fibonacci Series: ";
  
    for(i=0 ; i<n ; i++)
    {  
        if(i <= 1)
        {
            sum = i;
        }

        else            
        {
            sum = n1 + n2;
            n1 = n2;      
            n2 = sum;  
        }
        cout << sum << " ";
    }  
    return 0;
}