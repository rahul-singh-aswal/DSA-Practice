#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n)
{
    // this code shift all non zero values to left
    int i = 0; // i = non zero pointer

    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {0, 1, 0, 3, 12, 0};
    print(arr, 6);

    moveZeroes(arr, 6);

    print(arr, 6);

    return 0;
}