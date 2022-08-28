/////////////////////// [F] Attempt the following: ///////////////////////

//// (a) Any year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and ||. ////

/*#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << endl << "Enter the year: ";
    cin >> year;

    if((year%4==0 || year%400==0) && (year%100!=0))
    {
        cout << endl << year << " is leap year";
    }
    else
        cout << endl << year << " is not a leap year";
    return 0;
}*/

/* (b) Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol.
 The following table shows the range of ASCII values for various characters.
Characters 
A – Z
a – z
0 – 9
special symbols

ASCII Values
65 – 90
97 – 122
48 – 57
0 - 47, 58 - 64, 91 - 96, 123 - 127 */

/* #include<iostream>
using namespace std;

int main()
{
    char ch;
    int ascii;

    cout << endl << "Enter a character: ";
    cin >> ch;
    ascii = ch;

    cout << endl << "ASCII value of " << ch << " is: " << ascii << "\n";


    //for capital characters (A to Z)
    if (ascii >= 65 && ascii <= 90)
        cout << endl << ch << " is a capital letter";

    //for small characters (a to z)
    else if (ascii >= 97 && ascii <=122)
        cout << endl << ch << "is a small letter";

    //for digits (0 to 9)
    else if (ascii >=48 && ascii <= 57)
        cout << endl << ch << " is a digit";

    //for special symbols
    else if (ascii>=0 && ascii<=47 || ascii>=58 && ascii<=64 || ascii>=91 && ascii<=96 || ascii>=123 && ascii<=127)
        cout << endl << ch << " is a special symbols";

} */

/* (c) An Insurance company follows following rules to calculate premium.

    (1) If a person’s health is excellent and the person is between 25 and 35 years of age and lives in a city and is a male then the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs. 
    (2) If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh. 
    (3) If a person’s health is poor and the person is between 25 and 35 years of age and lives in a village and is a male then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.
    (4) In all other cases the person is not insured. 

Write a program to output whether the person should be insured or not, his/her premium rate and maximum amount for which he/she can be insured. */

/*#include<iostream>
using namespace std;

int main()
{
    char h,l,g;
    int a;

    cout << endl << "Enter Heath e For Excellent And p For Poor: ";
    cin >> h;

    cout << endl << "Enter Location c For City And v For Village: ";
    cin >> l;

    cout << endl << "Enter Gender m For Male And f For Female: ";
    cin >> g;

    cout << endl << "Enter Age: ";
    cin >> a;

    if((h == 'e') && (l == 'c') && (g == 'm') && (a >= 25 || a <= 35))
        cout << endl << "The Premium Is Rs.4 Per Thousand And His Policy Cannot Exceed Rs.2 Lakhs";

    else if((h == 'e') && (l == 'c') && (g == 'f') && (a >= 25 || a <= 35))
        cout << endl << "The Premium Is Rs.3 Per Thousand And Her Policy Cannot Exceed Rs.1 Lakhs";

    else if((h == 'p') && (l == 'v') && (g == 'm') && (a >= 25 || a <= 35))
        cout << endl << "The Premium Is Rs.6 Per Thousand And Cannot Exceed Rs. 10,000";

    else
        cout << endl << "not Insured";

    return 0;
}*/


/* (d) A certain grade of steel is graded according to the followin conditions:

(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600

The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel. */

/*#include<iostream>
using namespace std;

int main()
{

    float h, cc, ts;

    //    flags for three conditions
    int h_f=0, cc_f=0, ts_f=0; 
    int grade;
    
    cout << endl << "Enter the value of Hardness: ";
    cin >> h;

    cout << endl << "Enter the value of Carbon Content: ";
    cin >> cc;

    cout << endl << "Enter the value of Tensile Strength: ";
    cin >> ts;

    //first three conditional
    if (h > 50)
        h_f = 1;

    if (cc < 0.7)
        cc_f = 1;

    if (ts > 5600)
        ts_f = 1;

    //Finding Grade
    //1. if none of the conditions are met
    if(h_f == 0 && cc_f == 0 && ts_f == 0)
        grade = 5;

    //2. if only one condition is met
    if(h_f == 1 || cc_f == 1 || ts == 1)
        grade = 6;

    //3 if condition (i) and (iii) are met
    if(h_f == 1 && cc_f == 0 && ts_f == 1)
        grade = 7;

    //4. if conditions (ii) and (iii) are met
    if(h_f == 0 && cc_f == 1 && ts_f == 1)
        grade = 8;

    //5. if conditions (i) and (ii) are met
    if(h_f == 1 && cc_f == 1 && ts_f == 0)
        grade = 9;

    //6. if all the three conditions are met
    if(h_f == 1 && cc_f == 1 && ts_f == 1)
        grade = 10;

    cout << endl << "The grade of steel is: " << grade;
}*/

//// (e) A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message. ////

/*#include<iostream>
using namespace std;

int main()
{
    int days;
    float fine;

    cout << endl << "Enter the number of days: ";
    cin >> days;

    if (days > 0 && days <= 5)
        fine = 0.50 * days;

    if (days >= 6 && days <= 10)
        fine = 1 * days;

    if (days > 10)
        fine = 5 * days;

        if (days > 30)
        {
            cout << endl << "Your membership would be canceled.\n";
        }


    cout << endl << "You have to pay Rs. " << fine << " fine.";
}*/

//// (f) If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater than the largest of the three sides. ////

/*#include<iostream>
using namespace std;

int main()
{
    int x, y, z;
    int max, valid;

    cout << endl << "Enter the first side of triangle: ";
    cin >> x;

    cout << endl << "Enter the second side of triangle: ";
    cin >> y;

    cout << endl << "Enter the third side of triangle: ";
    cin >> z;

    max = x;

    if(max<y)
        max=y;

    if(max<z)
        max=z;

    //if largest side is lower than the sum of two remaining sides
    if(max == x && x < (y+z))
        valid = 1;

    if(max == y && y < (x+z))
        valid = 1;

    if(max == z && z < (x+y))
        valid = 1;

    if (valid==1)
        cout << endl << "Triangle is valid";
    else
        cout << endl << "Triangle is not valid";
}*/

//// (g) If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle. ////

/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x, y, z;   
    int max, flag = 0;

    cout << endl << "Enter the first side: ";
    cin >> x;

    cout << endl << "Enter the second side: ";
    cin >> y;

    cout << endl << "Enter the third side: ";
    cin >> z;

    if (x == y && x == z)
    {
        cout << endl << "Triangle is equilateral.";
    }

    else if (x == y || y == z || z == x)
    {
        cout << endl << "Triangle is isosceles.";
    }

    max = x;
    if (y > max)
        max = y;

    if (z > max)
        max = z;
    
    if (max == x)
    {
        if(pow(max,2) == pow(y,2) + pow(z,2))
            flag=1;
    }

    if (max == y)
    {
        if(pow(max,2) == pow(x,2) + pow(z,2))
            flag=1;
    }

    if (max == z)
    {
        if(pow(max,2) == pow(x,2) + pow(y,2))
            flag=1;
    }

    if(flag == 1)
    {
        cout << endl << "Triangle is right angled";
    }

}*/

//// (h) In a company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job. If the time taken by the worker is between 2 – 3 hours, then the worker is said to be highly efficient. If the time required by the worker is between 3 – 4 hours, then the worker is ordered to improve speed. If the time taken is between 4 – 5 hours, the worker is given training to improve his speed, and if the time taken by the worker is more than 5 hours, then the worker has to leave the company. If the time taken by the worker is input through the keyboard, find the efficiency of the worker. ////

/*#include<iostream>
using namespace std;

int main()
{
    float hours;

    cout << endl << "Input the time taken by worker: ";
    cin >> hours;

    if(hours>=2 && hours<=3)
        cout << endl << "Worker is highly efficient";

    if(hours>3 && hours <=4)
        cout << endl << "Worker needs to improve speed";

    if(hours>4 && hours <=5)
        cout << endl << "Give training to worker";
    
    if(hours>5)
        cout << endl << "Worker is terminated";

    return(0);
}*/


/* (i) A university has the following rules for a student to qualify for a degree with A as the main subject and B as the subsidiary subject:
    
    (a) He should get 55 percent or more in A and 45 percent or more in B.
    (b) If he gets than 55 percent in A he should get 55 percent or more in B. However, he should get at least 45 percent in A.
    (c) If he gets less than 45 percent in B and 65 percent or more in A he is allowed to reappear in an examination in B to qualify.
    (d) In all other cases he is declared to have failed. 

Write a program to receive marks in A and B and Output whether the student has passed, failed or is allowed to reappear in B. */

/*#include<iostream>
using namespace std;

int main()
{
	int markA, markB;

	cout << endl << "enter the mark in subject A and B:  ";
	cin >> markA >> markB;

	if (markA >= 55 && markB >= 45)
	{
		cout << endl << "STUDENT QUALIFY FOR DEEGRY ";
	}
	else if (markA >= 45 && markB >= 55)
	{
		cout << endl << "STUDENT QUALIFY FOR DEEGRY ";
	}
	else if (markA >= 65 && markB < 45)
	{
		cout << endl << "student reapear to qualify exam B";
	}
	else
		cout << endl << "student decleared fail";

	return 0;
}*/

/* (j) The policy followed by a company to process customer orders is given by the following rules:

    (a) If a customer order is less than or equal to that in stock and has credit is OK, supply has requirement.
    (b) If has credit is not OK do not supply. Send him intimation.
    (c) If has credit is Ok but the item in stock is less than has order, supply what is in stock. Intimate to him data the balance will be shipped.

Write a C program to implement the company policy. */

#include<iostream>
using namespace std;

int main()
{
    int stock=100, order;
    char credit;

    cout << endl << "Enter the customer order: ");
    cin >> order;
    
    cout << endl << "Is his credit is ok? (Press y/n)\n");
    credit = return;  
    

    if(order<=stock && credit == 'y' || credit == 'Y')
        cout << endl << "Sir,\n\t We supplied your requirement\n\t\t Quantity: " << order;

    else if(order>stock && credit == 'y' || credit == 'Y')
        cout << endl << "Sir,\n\t We supplied " << stock << " products and balance will be shipped later.",stock;

    else
        cout << endl << "Sir,\n\t Please first clear your credit, until we can't supply you any more.";
}