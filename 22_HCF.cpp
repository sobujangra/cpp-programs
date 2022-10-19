#include <iostream>

using namespace std;

int main()
{
    int num1, num2, hcf;

    cout << "Enter 1st Number: ";
    cin >> num1;

    cout << "Enter 2nd Number: ";
    cin >> num2;

    for (hcf = num1 < num2 ? num1 : num2; hcf >= 1; hcf--)
        if ( num1 % hcf == 0 && num2 % hcf == 0)
            break;

    cout << "HCF of " << num1 << " and " << num2 << " is " << hcf;

    return 0;
}