#include <iostream>

using namespace std;

void printAP(int a, int d, int n)
{
    for (int i = 0; i < n; i++)
        cout << a + i * d << "\t";
}

int main()
{
    int a, diff, num;

    cout << "Enter first number, a: ";
    cin >> a;

    cout << "Enter common difference, d: ";
    cin >> diff;

    cout << "Enter no. of terms, n: ";
    cin >> num;

    printAP(a, diff, num);

    return 0;
}