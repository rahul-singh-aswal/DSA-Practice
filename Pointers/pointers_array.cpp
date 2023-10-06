#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {23, 122, 41, 67};

    cout << "address of first memory block is : " << arr << endl;

    cout << "address of first memory block is : " << &arr[0] << endl;

    cout << "*arr : " << *arr << endl;

    cout << "*arr+1 : " << *arr + 1 << endl;

    cout << "*(arr+1) : " << *(arr + 1) << endl;

    cout << "(*arr)+1 : " << (*arr) + 1 << endl;

    cout << "arr[2] : " << arr[2] << endl;

    cout << "*(arr+2) : " << *(arr + 2) << endl;

    int i = 3;
    cout << "i[arr] : " << i[arr] << endl;

    // size
    int temp[10];
    cout << "Size of temp array : " << sizeof(temp) << endl;
    cout << "Size of *temp : " << sizeof(*temp) << endl;
    cout << "Size of &temp : " << sizeof(&temp) << endl;

    int *ptr = &temp[0];
    cout << "Size of pointer ptr : " << sizeof(ptr) << endl;

    cout << "Size of *ptr : " << sizeof(*ptr) << endl;

    cout << "Size of &ptr : " << sizeof(&ptr) << endl;

    cout << endl;

    // & opterator
    int a[20] = {1, 2, 3, 5};
    cout << "&a[0] : " << &a[0] << endl;
    cout << "&a : " << &a << endl;
    cout << "a : " << a << endl;

    int *p = &a[0];
    cout << "p : " << p << endl;
    cout << "*p : " << *p << endl;
    cout << "&p : " << &p << endl;

    // Symbol table
    int arr1[10] = {0};
    // arr1 = arr + 1; // generate error

    int *ptr1 = &arr1[0];
    cout << "ptr : " << ptr << endl;
    ptr = ptr + 1;
    cout << "ptr : " << ptr << endl;

    return 0;
}