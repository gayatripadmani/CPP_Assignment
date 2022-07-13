// WAP to check if the entered no is armstrong or not.

#include <iostream>
using namespace std;

int main() {
   int num, sum = 0, digit;

   cout << endl << "Enter a positive integer: ";
   cin >> num;

   for(int temp=num; temp!=0;){
      digit = temp % 10;
      sum = sum +(digit * digit * digit);
      temp = temp/10;
   }

   if(sum == num)
      cout << endl << num << " is an Armstrong number.";
   else
      cout << endl << num << " is not an Armstrong number.";

   return 0;
}