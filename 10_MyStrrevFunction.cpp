#include <iostream>
#include <string.h>

using namespace std;

char *myStrrev (char *str)
{
    int len = 0, n;
    char temp;

    len = strlen(str);

    n = len - 1;

    for (int i = 0; i <= (len / 2) - 1; i++, n--)
    {
        temp = str[i];
        str [i] = str [n];
        str [n] = temp;
    }

    return str;
}

int main()
{
    char str[] = "Sourabh Jangra";

    myStrrev(str);

    cout << "Reversed String using myStrrev function : " << str;

    return 0;
}