#include <iostream>
#include <cmath>

using namespace std;

//Logarithmic Function
int countDigits(int n)
{
    return floor(log10(n) + 1);
}

int main()
{
    int num;

    cout << "Enter Number to find its digits: ";
    cin >> num;

    cout << "The Number of digits in " << num << " is " << countDigits(num);

    return 0;
}