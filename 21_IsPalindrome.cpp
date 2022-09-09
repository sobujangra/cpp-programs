#include <iostream>

using namespace std;

void isPalindrome(int n)
{
    int num = n, reverseNum = 0;

    while(num != 0)
    {
        reverseNum = 10 * reverseNum + (num % 10);
        num = num / 10;
    }

    //cout << reverseNum;

    if (n == reverseNum)
        cout << "Number is palindrome.";
    else
        cout << "Number is not palindrome.";
}

int main()
{
    int num;

    cout << "Enter a number to check if it is palindrome or not: ";
    cin >> num;

    isPalindrome(num);

    return 0;
}