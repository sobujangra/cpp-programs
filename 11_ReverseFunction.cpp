#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str = "Sourabh Jangra";

    reverse(str.begin(), str.end());

    cout << "Reversed String: " << str;

    return 0;
}