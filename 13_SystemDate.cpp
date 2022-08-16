#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SYSTEMTIME stime;
    GetSystemTime(&stime);

    cout << stime.wDay << "/" << stime.wMonth << "/ " << stime.wYear;
}