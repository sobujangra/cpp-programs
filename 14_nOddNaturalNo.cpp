#include <iostream>

using namespace std;

int main()
{
    int digit;

    cout << "Enter the number of digits: ";
    cin >> digit;

    for (int i = 1; i <= digit; i++)
        cout << 2 * i - 1 << " ";
    
    return 0;
}