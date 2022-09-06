#include <iostream>

using namespace std;

//Recursive Function
int countDigits(int n)
{
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main()
{
    int num;

    cout << "Enter Number to find its digits: ";
    cin >> num;

    cout << "The Number of digits in " << num << " is " << countDigits(num);

    return 0;
}
