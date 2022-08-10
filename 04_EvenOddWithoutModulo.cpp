#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if(num & 1 == 1)
        cout << "Odd Number";
    else
        cout << "Even Number";

    return 0;
}