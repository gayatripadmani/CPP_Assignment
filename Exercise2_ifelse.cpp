//Exercise - 2 
//if, if-else, Nested if-elses

//#include<iostream>
//using namespace std;

///////////////////[A] What would be the output of the following programs:///////////////////////

//// (a) ////

/*int main(){
    int a = 300, b, c ;
    if ( a >= 400 )
        b = 300 ;
        c = 200 ;
    cout << endl << b, c ;
}*/

//// (b) ////

/*int main( )
{
    int a = 500, b, c ; 
    if ( a >= 400 )
        b = 300 ;
        c = 200 ;
    cout << endl << b, c ;
}*/

//// (c) ////

/*int main( )
{
    int x = 10, y = 20 ;
    if ( x == y ) ;
    cout << endl << x, y ;
}*/

//// (d) ////

/*int main( )
{
    int x = 3, y = 5 ;
    if ( x == 3 )
        cout << endl << x ;
    else ;
        cout << endl << y ;
}*/

//// (e) ////

/*int main()
{
    int x = 3 ;
    float y = 3.0 ; 
    if ( x == y )
        cout << endl << "x and y are equal" ;
    else
        cout << endl << "x and y are not equal" ;
}*/

//// (f) ////

/*int main()
{
    int x = 3, y, z ;
    y = x = 10 ;
    z = x < 10 ;
    cout << endl << "x = " << x << " y = " << y << " z = " << z ;
}*/

//// (g) ////

/*int main( )
{
    int k = 35 ;
    printf ( "\n%d %d %d", k == 35, k = 50, k > 40 ) ;
}*/

//// (h) ////

/*int main( )
{
    int i = 65;
    char j = 'A';
    if ( i == j )
        printf ( "C is WOW" ) ;
    else
        printf( "C is a headache" ) ;
}*/

//// (i) ////

/*int main( )
{
    int a = 5, b, c ;
    b = a = 15 ;
    c = a < 15 ;
    printf ( "\na = %d b = %d c = %d", a, b, c ) ;
}*/

//// (j) ////

/*int main( )
{
    int x = 15 ;
    printf ( "\n%d %d %d", x != 15, x = 20, x < 30 ) ;
}*/


///////////////////[B] Point out the errors, if any, in the following programs:///////////////////////

//// (a) ////

/*main( )
{
    float a = 12.25, b = 12.52 ;
    if ( a = b )
        printf ( "\na and b are equal" ) ;
}*/

//// (b) ////

/*main( )
{
    int j = 10, k = 12 ;
    if ( k >= j )
    {
        {   
            k = j ;
            j = k ;
        }
    }
}*/

//// (c) ////

/*main( )
{   
    if ( 'X' < 'x' )
        printf ( "\nascii value of X is smaller than that of x" ) ;
}*/

//// (d) ////

/*main( )
{
    int x = 10 ;
        if ( x >= 2 ) then
            printf ( "\n%d", x ) ;
}*/

//// (e) ////

/*main( )
{
    int x = 10 ;
    if x >= 2
        printf ( "\n%d", x ) ;
}*/

//// (f) ////

/*main( )
{
    int x = 10, y = 15 ;
    if ( x % 2 = y % 3 )
        printf ( "\nCarpathians" ) ;
}*/

//// (g) ////

/*main( )
{
    int x = 30 , y = 40 ;
    if ( x == y )
        printf( "x is equal to y" ) ;
    else if ( x > y )
        printf( "x is greater than y" ) ;
    else if ( x < y )
        printf( "x is less than y" ) ;
}*/

//// (h) ////

/*main( )
{
    int x = 10 ;
    if ( x >= 2 ) then
        printf ( "\n%d", x ) ;
}*/

//// (i) ////

/*main( )
{
    int a, b ;
        scanf ( "%d %d",a, b ) ;
    if ( a > b ) ;
        printf ( "This is a game" ) ;
    else
        printf ( "You have to play it" ) ;
}*/


///////////////////[C] Attempt the following:///////////////////////

//// (a) If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. ////

/*#include<iostream>
using namespace std;

int main()
{
    float cp, sp, profit, loss;

    cout << endl << "Enter the cost price of an item: ";
    cin >> cp;

    cout << endl << "Enter the selling price of an item: ";
    cin >> sp;

    if (sp > cp)   //here we get profit on selling item
    {
        //calculate profit via selling price - cost price
        profit = sp - cp;
        cout << endl << "We earn " << profit << " profit by selling item.";

    }

    else if (sp < cp)   //here we get loss on selling item
    {
        //calculate loss via cost price - selling price
        loss = cp - sp;
        cout << endl << "\nWe incurred " << loss << " loss on selling item.";
    }

    else    //here we don't get any loss and profit on selling item when (cost price == selling price)
    {
        cout << endl << "\nWe don't get any loss and profit on selling item";
    }

    return 0;

}*/

//// (b) Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number ////

/*#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << endl << "Enter Number: ";
    cin >> num;

    if(num % 2 == 0)
    {
       cout << endl << num << " is Even Number.";
    }
    else
    {
        cout << endl << num << " id Odd Number.";
    }

    return 0;
}*/

//// (c) Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Hint: Use the % (modulus) operator) ////

/*#include<iostream>
using namespace std;

int main()
{
    int year;

    cout << endl << "Enter the year: ";
    cin >> year;

    //if year is completely divisible by 4
    if (year % 4 == 0)
    {
        //if year is completely divisible by 4 and 100
        if (year % 100 == 0)
        {
            //if year is completely divisible by 4, 100, and 400
            if (year % 400 == 0)
            {
                cout << endl << year << " is a Leap Year.";
            }

            else
            {
                cout << endl << year << " is not a Leap Year.";
            }
        }
        else
        {
            cout << endl << year << " is a Leap Year.";
        }
    }
    else
    {
        cout << endl << year << " is not a Leap Year.";
    }
    return 0;
}*/

//// (d) According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year. ////

/*#include <iostream>
using namespace std;

int main()  
{  
    int ref_year = 1900, year, leap = 0, diff, total_days = 0, day = 0;  
  
    cout << endl << "Enter a year between 1900 and 2099: ";  
    cin >> year;
  
    diff = year - ref_year;  
  
    while(ref_year < year)  
    {  
        if(ref_year % 100 == 0)  
        {  
            if(ref_year % 400 == 0)  
            {  
                leap++;  
            }  
        }  
        else  
        {  
            if(ref_year % 4 == 0)  
            {  
                leap++;  
            }  
        }  
        ref_year++;  
    }  
  
    total_days = (diff - leap) * 365 + leap * 366;  
    day        = total_days % 7;  
  
    cout << endl << "\nThe day on 01 January " << year <<  " was ";  
  
    switch(day)  
    {  
        case 0: cout << "Monday.\n";  
                break;  
        case 1: cout << "Tuesday.\n";  
                break;  
        case 2: cout << "Wednesday.\n";  
                break;  
        case 3: cout << "Thursday.\n";  
                break;  
        case 4: cout << "Friday.\n";  
                break;  
        case 5: cout << "Saturday.\n";  
                break;  
        case 6: cout << "Sunday.\n";  
                break;  
    }  
  
    return 0;  
}*/

//// (e) A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not. ////

/*#include<iostream>
using namespace std;

int main()
{
    int num, n, r_num=0;

    cout << endl << "Enter a number: ";
    cin >> num;
    
    n = num;
    
    while(num!=0)
    {
        r_num = r_num * 10;

        r_num = num % 10 + r_num;

        num = num/10;
    }

    cout << endl << "Reversed Number of " << n << " is " << r_num << "\n";

    if (n==r_num)
        cout << endl << "Input Number " << n << " & Reversed Number " << r_num << " are equal";
    else
        cout << endl << "Input Number " << n << " & Reversed Number " << r_num << " are not equal";

   return 0;
}*/

//// (f) If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three. ////

/*#include<iostream>
using namespace std;

int main()
{
	int ram_age, shyam_age, ajay_age;
	
    cout << "Enter Ram age: ";
	cin >> ram_age;
	 
    cout << "Enter Sulabh age: ";
	cin >> shyam_age;
	
    cout << "Enter Ajay age: ";
	cin >> ajay_age;

	if (ram_age < shyam_age && ram_age < ajay_age)
		cout << "Ram is youngest";

	else if(shyam_age < ram_age && shyam_age < ajay_age)
		cout << "Shyam is youngest";

	else
		cout << "Ajay is youngest";

	return 0;
}*/

//// (g) Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees. ////

/*#include<iostream>
using namespace std;

int main()
{
	int angle1, angle2, angle3;

	cout << endl << "Enter the three angles of triangle: ";
	cin >> angle1 >> angle2 >> angle3;

	if (angle1 + angle2 + angle3 == 180)
		cout << endl << "Triangle is valid";
	else
		cout << endl << "Triangle is not valid";
	
	return 0;
}*/

//// (h) Find the absolute value of a number entered through the keyboard. ////

/*#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << endl << "Enter any number:";
	cin >> a;

	if(a > 0)
		cout << endl << "The absolute value of number is: " << a;
	else
		cout << endl << "The absolute value of number is: " << -(a);

	return 0;
}*/

//// (i) Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter. ////

/*#include<iostream>
using namespace std;

int main()
{
    float length, breadth, area, perimeter;

    cout << endl << "Enter the length of rectangle: ";
    cin >> length;

    cout << endl << "Enter the breadth of rectangle: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length+breadth);

    cout << endl << "The area of rectangle: " << area << "\n";
    cout << endl << "The perimeter of rectangle: " << perimeter << "\n";

    if (area>perimeter)
        cout << endl << "Area of rectangle is greater than it's perimeter";
    else
        cout << endl << "Perimeter of rectangle is greater than it's area";
}*/

//// (j) Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line. ////

/*#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x1, y1, x2, y2, x3, y3;
    double ab, bc, ac, abc;

    cout << endl << "Enter the co-ordinates of first point (X1, Y1): ";
    cin >> x1 >> y1;

    cout << endl << "Enter the co-ordinates of second point (X2, Y2): ";
    cin >> x2 >> y2;

    cout << endl << "Enter the co-ordinates of third point (X3, Y3): ";
    cin >> x3 >> y3;

    ab = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    bc = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    ac = sqrt(pow(x3-x1,2)+pow(y3-y1,2));

    cout << endl << "ab: " << ab << "\t bc: " << bc << "\t ac: " << ac << "\n";
    abc = ab+bc;

    if(abc == ac)
    {
        cout << endl << "ab + bc = ac\n";
        cout << endl << "All the three points fall on one straight line.";
    }
    else
        cout << endl << "All the three points are not present on one straight line.";

return 0;
}*/

//// (k) Given the coordinates (x, y) of a center of a circle and it’s radius, write a program which will determine whether a point lies inside the circle, on the circle or outside the circle. (Hint: Use sqrt( ) and pow( ) functions) ////

/*#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int x1, y1, x2, y2, radius;
    float pc;

    cout << endl << "Enter the center co-ordinates of the circle: ";
    cin >> x1 >> y1;

    cout << endl << "Enter the point co-ordinates: ";
    cin >> x2 >> y2;

    cout << endl << "Enter the radius of the circle: ";
    cin >> radius;

    pc = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));

    if(pc > radius)
        cout << endl << "Point (" << x2 << "," << y2 << ") lies outside the circle.";

    else if(pc < radius)
        cout << endl << "Point (" << x2 << "," << y2 << ") lies inside the circle.";

    else if(pc == radius)
        cout << endl << "Point (" << x2 << "," << y2 << ") lies on the boundary of circle.";

    else
        cout << endl << "Wrong Entry";

    return 0;
}*/

//// (l) Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). ////

/*#include<iostream>
using namespace std;

int main()
{
    int x1, y1;

    cout << endl << "Enter the co-ordinates of point: ";
    cin >> x1 >> y1;

    if(x1 == 0 && y1 !=0)

        cout << endl << "Point (" << x1 << "," << y1 << ") lies on y-axis";
    else if (x1 !=0 && y1 == 0)

        cout << endl << "Point (" << x1 << "," << y1 << ") lies on x-axis";
    else if (x1 == 0 && y1 == 0)
    
        cout << endl << "Point (" << x1 << "," << y1 << ") lies on the origin";
    else
        cout << endl << "Point (" << x1 << "," << y1 << ") neither lie on x-axis nor on y-axis";

    return 0;
}*/