#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int size)
{
    cout << "Size of array is " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool linearSearch(int *arr, int size, int key)
{
    print(arr, size);
    // base case
    if (size == 0)
    {
        return 0;
    }

    if (arr[0] == key)
    {
        return 1;
    }

    int ans = linearSearch(arr + 1, size - 1, key);
    return ans;
}

int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 7;

    bool ans = linearSearch(arr, size, key);

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