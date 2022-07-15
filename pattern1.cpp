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
        for(j=1; j<=n; j++)
        {
            if(k == 1)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }

            k *= -1;
        }

        if(n % 2 == 0)
        {
            k *= -1;
        }

        cout << endl;
    }

    return 0;
}