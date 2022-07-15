#include<iostream>
using namespace std;

int main()
{
    int n, i, j, k;

    cout << endl << "Enter number: ";
    cin >> n;

    k = 1;

    for(i=1; i<=n; i++)
    {
       
       for(j=1; j<=n; j++, k++)
        {
            cout << k;
        }

        cout << endl;
    }

    return 0;
}