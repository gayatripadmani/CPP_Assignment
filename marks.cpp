/* Enter marks of three subject and calculate total marks and percentage. Also find class according to 
Percentage		class
--------------------------------------
<40			Fail
<50 and >=40		Pass
<60 and >=50		Second
<70 and >=60		First
>=70			Distinction
(Using:   1. Nested if   2. Logical Operator   3. Ladder else if)*/


#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int rollno, phy, che, mt, total;
    float percentage;
    char name[20], div[10];

    cout << endl << "Input the Roll Number of the student :";
    cin >> rollno;

    cout << endl << "Input the Name of the Student :";
    cin >> name;

    cout << endl << "Input the marks of Physics, Chemistry and Maths: ";
    cin >> phy >> che >> mt;

    total = phy + che + mt;
    percentage = total/3.0;

    if (percentage >= 70)
        strcpy(div, "Distinction");

    else if (percentage < 70 && percentage >= 60)
        strcpy(div,"First");

    else if (percentage < 60 && percentage >= 50)
        strcpy(div, "Second");

    else if (percentage < 50 && percentage >= 40)
        strcpy(div, "Pass");

    else if (percentage < 40)
        strcpy(div, "Fail");
    
    else
        strcpy(div, "Invalid Number");

       cout << endl << "Roll No : " << rollno << endl;
       cout << endl << "Name of Student : " << name << endl;
       cout << endl << "Marks in Physics : " << phy << endl;
       cout << endl << "Marks in Chemistry : " << che << endl;
       cout << endl <<"Marks in Information Technology : " << mt << endl;
       cout << endl << "Total Marks = " << total <<endl;
       cout << endl << "Percentage = " << percentage <<endl;
       cout << endl << "Division = " << div <<endl;


}