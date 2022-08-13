#include <iostream>

using namespace std;

int fib(int n)
{
    if (n == 1)
        return 0;
    else
        return n == 2 | n == 3 ? 1 : fib(n - 1) + fib(n - 2);
}

int main()
{
    int num;

    cout << "Enter number of elements of fibonacci series: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
        cout << "Fibonacci Series: " << fib(i) << endl;
    
    return 0;
}