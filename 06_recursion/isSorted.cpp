#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    //  base case
    if (size == 0 || size == 1)
    {
        return 1;
    }

    if (arr[0] > arr[1])
    {
        return 0;
    }

    else
    {
        int remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = {2, 4, 6, 7, 9};
    int size = 5;

    bool ans = isSorted(arr, size);

    if(ans) {
        cout << "Array is sorted" << endl;
    }

    else {
         cout << "Array is not sorted" << endl;
    }

    return 0;
}