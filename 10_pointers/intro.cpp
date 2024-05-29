#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;

    cout << num << endl;

    //  address operator -> &

    cout << "Address of num: " << &num << endl;

    int *ptr = &num;

    cout << "Address of num: " << ptr << endl;
    cout << "value of num is: " << *ptr << endl;

    double d = 4.7;
    double *p2 = &d;

    cout << "Address of double: " << p2 << endl;
    cout << "value of double is: " << *p2 << endl;

    cout << "size of integer is: " << sizeof(num) << endl;
    cout << "size of pointer is: " << sizeof(ptr) << endl;
    cout << "size of double is: " << sizeof(p2) << endl;

    return 0;
}