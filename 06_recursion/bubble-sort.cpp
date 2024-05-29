#include <bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int size)
{
    // base case - already sorted
    if (size == 0 || size == 1)
    {
        return;
    }

    // 1 case solve kr liya - largest element  ko end me rkha dega

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    sortArray(arr, size - 1);
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {2, 5, 2, 6, 8};
    cout << "Before sorting " << endl;
    printArray(arr, 5);

    sortArray(arr, 5);

    cout << "After sorting " << endl;
    printArray(arr, 5);

    return 0;
}