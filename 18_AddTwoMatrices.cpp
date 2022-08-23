#include <iostream>

using namespace std;

void getElements(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
}

void addMatrices(int A[3][3], int B[3][3], int C[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void showElements(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int A[3][3], B[3][3], C[3][3];

    cout << "Enter elements of first array: " << endl;
    getElements(A);

    cout << "Enter elements of second array: " << endl;
    getElements(B);

    addMatrices(A, B, C);

    cout << "Final Matrix: " << endl;
    showElements(C);

    return 0;
}