#include <iostream>

using namespace std;

int strlen(string str)
{
    int i;

    for (i = 0; str [i] != '\0'; i++);
    
    return i;
}

int main()
{
    string str;
    int length = 0;

    cout << "Enter a String: ";
    cin >> str;

    length = strlen(str);

    cout << "Length of String: " << length;

    return 0;
}