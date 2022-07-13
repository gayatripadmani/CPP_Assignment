// WAP to print perfect no from 1 to 100.

#include <iostream>
using namespace std;

bool isPerfect(int no)
{
	int i = 0;
	int sum = 0;

	while (i++ < no)
	{
		if (no % i == 0 && i < no)
		{
			sum += i;
		}
	}
	return sum == no;
}

int main()
{
	float first = 1;
	float second = 100;

	cout << endl << "Perfect numbers between " << first << " and " << second << " :" << endl;

	for (int i = first; i <= second; i++)
	{
		if (isPerfect(i))
		{
			cout << i << endl;
		}
	}

	return 0;
}