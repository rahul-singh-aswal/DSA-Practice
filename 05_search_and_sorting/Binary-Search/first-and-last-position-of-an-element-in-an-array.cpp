#include <bits/stdc++.h>
using namespace std;

// First Occurence
int firstOccurence(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

// Last Occurence
int lastOccurence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
    }

    return ans;
}


int main()
{
    int even[6] = {1, 2,3, 3, 3, 5};

    cout << "Hello World";

    cout << "First positon of 3:\t" << firstOccurence(even, 6,3) << endl; 

    cout << "Hello World";

    cout << "First positon of 3:\t" << lastOccurence(even, 6,3) << endl; 

    cout << "Hello World";

    return 0;
}