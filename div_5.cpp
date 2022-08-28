#include<iostream>
using namespace std;

int main(){
    int num; 

    cout << endl << "Enter any integer: ";
    cin >> num; 

    if(num % 5 == 0){
        cout << endl << num << "is divisible by 5.";
    }
    else{
        cout << endl << num << "is not divisible by 5.";
    }

    return 0;
}