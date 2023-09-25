#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[][4], int row, int col)
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

void takeInput(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];
    takeInput(arr, 3, 4);
    printArray(arr, 3, 4);

    int element;

    cout << "Enter element to found: ";
    cin >> element;

    if (isPresent(arr, element, 3, 4))
    {
        cout << "Element is found" << endl;
    }

    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}