#include <iostream>

using namespace std;

int main()
{
    int r;
    float area;

    cout << "Enter radius of circle: ";
    cin >> r;

    area = 3.14 * r * r;

    cout << "The area of circle is: " << area;

    return 0;
}