#include <iostream>

using namespace std;

int main()
{
    int num, n, i;

    cout << "Enter a number: ";
    cin >> num;

    n = num;

    for (i = 0; n != 0; i++)
        n = n / 10;
    
    cout << "No of digits in " << num << " is " << i;

    return 0;
}
