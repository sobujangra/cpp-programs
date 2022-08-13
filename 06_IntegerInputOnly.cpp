#include <iostream>
#include <conio.h>

using namespace std;

int getIntegerOnly()
{
    char ch;
    int x = 0;

    while (1)
    {
        ch = getch();

        if (ch >= 48 && ch <= 57)
        {
            cout << ch;
            x = x * 10 + (ch - 48);
        }
            
        else if (ch == 13)
            break;
    }

    return x;
}

int main()
{
    int num;

    cout << "Enter a Number: ";

    num = getIntegerOnly();

    cout << endl << "You have entered: " << num;

    getch();
    
    return 0;
}