#include <bits/stdc++.h>
using namespace std;

int arraySum(int *arr, int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    int sum = arr[0] + arraySum(arr + 1, size - 1);

    return sum;
}

int main()
{
    int arr[5] = {2, 3, 6, 5, 1};
    int size = 5;

    int sum = arraySum(arr, size);

    cout << "Sum of array elements : " << sum << endl;

    return 0;
}