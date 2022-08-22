#include <iostream>

using namespace std;

int main()
{
    int num, n, sum = 0;

    cout << "Enter a Number: ";
    cin >> num;

    n = num;

    for (int i = 0; n != 0; i++)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    
    cout << "Sum of Digits of " << num << " is " << sum;

    return 0;
}