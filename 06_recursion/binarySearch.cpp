#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int s, int e, int k)
{
    cout << endl;
    print(arr, s, e);
    // base case
    // element not found
    if (s > e)
    {
        return 0;
    }
    int mid = s + (e - s) / 2;
    cout << "value of arr mid is " << arr[mid] << endl;

    // element found
    if (arr[mid] == k)
    {
        return 1;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }

    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()
{
    int arr[11] = {2, 4, 6, 10, 14, 18,22,38,47,53,221};
    int size = 11;
    int key = 221;

    bool ans = binarySearch(arr, 0, size - 1, key);

    if (ans)
    {
        cout << "Key is present" << endl;
    }

    else
    {
        cout << "Key is not present" << endl;
    }

    return 0;
}