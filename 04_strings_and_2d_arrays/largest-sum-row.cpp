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

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }

    cout << "The maximum sum is: " << maxi << endl;
    return rowIndex;
}

int main()
{
    int arr[3][3];
    takeInput(arr, 3, 3);
    printArray(arr, 3, 3);

    int index = largestRowSum(arr, 3, 3);

    cout << "Row with largest sum: " << index << endl;

    return 0;
}