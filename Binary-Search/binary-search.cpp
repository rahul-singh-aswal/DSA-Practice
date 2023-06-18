#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;

    // int mid = (start + end)/2;
    int mid = start + (end-start)/2;

    while(start <= end) {
        if (arr[mid] == key) {
            return mid;
        }

        // Right part
        else if (arr[mid] < key) {
            start = mid+1;
        }
        
        // Left part
        else {
            end = mid-1;
        }

        // mid = (start+end)/2;
        mid = start + (end-start)/2;
    }

    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 14};

    int odd[7] = {1, 4, 6, 8, 9, 12, 13};

    int evenIndex = binarySearch(even, 6, 8);
    cout << "Index of 8 is:\t" << evenIndex << endl;

    int oddIndex = binarySearch(odd, 7, 14);
    cout << "Index of 14 is:\t" << oddIndex << endl;



    return 0;
}