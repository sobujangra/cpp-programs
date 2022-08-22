#include <iostream>

using namespace std;

int main()
{
    int num, revNum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; num != 0; i++)
    {
        revNum = revNum * 10 + num % 10;
        num = num / 10;
    }

    cout << "Reverse of the number is: " << revNum;

    return 0;
}