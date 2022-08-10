#include <iostream>

using namespace std;

//Swap Function Declaration
void swap(int &, int &);

//Driver Code
int main()
{
    int num1, num2;

    cout << "Enter 1st Number: ";
    cin >> num1;

    cout << "Enter 2nd Number: ";
    cin >> num2;

    swap(num1, num2);

    cout << "Number 1: " << num1 << endl << "Number 2: " << num2;
    
    return 0;
}

//Swap Function Definition
void swap(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}