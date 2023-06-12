#include <iostream>
using namespace std;

void insert_in_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int size;
    cin >> size;

    int arr[100];

    insert_in_array(arr, size);
    cout << "Given array : " << endl;
    printArray(arr, size);
    cout << "Reverse array : " << endl;
    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}