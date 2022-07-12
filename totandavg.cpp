//// WAP for printing total and average of 10 different no’s. ////

 #include <iostream>
 using namespace std;

int main()
{
    int num, sum = 0;
    float avg;
    
    cout << "Enter the 10 numbers: ";

    for (int i = 1; i <= 10; i++){
        cout << endl << "Number " << i << " =";
        cin >> num;
        sum = sum + num;
    }
    
    avg = sum / 10;

    cout << endl << "Sum of 10 numbers: " << sum;

    cout << endl << "Average of 10 numbers: " << avg;
    
    return 0;
}