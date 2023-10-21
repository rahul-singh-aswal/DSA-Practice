#include <bits/stdc++.h>
using namespace std;

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int s, int e)
{
    // Select the pivot element from array and place it at its correct position in sorted array.

    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    // managing left and right part
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partion
    int p = partition(arr, s, e);

    // sorting left part
    quickSort(arr, s, p - 1);

    // sorting right part
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[13] = {2, 4, -5, 6, 12, 7, 7, 8, 8, 9, 9, 9, 9};
    int n = 13;

    cout << "Before sorting " << endl;
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "After sorting " << endl;
    printArray(arr, n);

    return 0;
}