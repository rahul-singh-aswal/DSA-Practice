#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void takeInput(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void rowWiseSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
}

void columnWiseSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }

        cout << "Sum of col " << i + 1 << ": " << sum << endl;
    }
}

int main()
{
    int arr[3][3];
    takeInput(arr, 3, 3);
    printArray(arr, 3, 3);

    rowWiseSum(arr, 3, 3);

    columnWiseSum(arr, 3, 3);

    return 0;
}