#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}




int main()
{
    int n = 10;
    int arr[n] = {7}; 

    for (int i = 0; i < n; i++) {
        arr[i] = 6;
    }

    printArray(arr, n);
    cout << endl;

    char ch[7] = {'a', 'b', 'c', 'd'};
    // printArray(ch, 7); 
    



    return 0;
}