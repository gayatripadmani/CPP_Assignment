/* Enter basic salary of employ and calculate DA = 45% of basic, HRA = 15% of basic, MA = 200(fix), PF = 10% of basic, Loan = 5% of basic and calculate Gross= basic + HRA + DA + MA. Give bonus according to:
Gross				Bonus
<5000				15% of basic
<10000 and >=5000		10% of basic
<15000 and >=10000	7% of basic
<20000 and >=15000	5% of basic
>=20000				0

Calculate net salary = basic + HRA + DA + MA + bonus – PF – Loan.
(Using: 1. Nested if   2. Logical Operator   3. Ladder else if)*/


#include <iostream>
using namespace std;

int main()
{
	double hra, da, pf, ma, loan, bonus, gross, salary, basic;

    cout << endl << "Enter the basic salary: ";
    cin >> basic;

	hra = 0.15 * basic;
	da = 0.45 * basic;
	pf = 0.1 * basic;
    loan = 0.5 * basic;
    ma = 200;

    gross = basic + hra + da + ma;

	if (gross >= 20000) 
    {
		bonus = 0;
	}
	else if (gross <20000 && gross >= 15000) 
    {
		bonus = 0.05;
	}
	else if(gross <15000 && gross >=10000)
    {
		bonus = 0.07;
	}
    else if(gross <10000 && gross >=5000)
    {
		bonus = 0.1;
	}
    else if(gross <5000)
    {
		bonus = 0.15;
	}

    salary = basic + hra + da + ma + bonus - pf - loan;
    cout << endl << "Total Salary = " << salary;
}
