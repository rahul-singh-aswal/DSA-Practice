#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pointer to int is created, and pointing to some garbage address

    int *p;

    cout << *p << endl; // garbage value

    int *p1 = 0;
    // cout << *p1 << endl; //segmentation fault

    int i = 5;
    int *p2 = 0;
    p2 = &i;

    cout << *p2 << endl;
    cout << p2 << endl;

    int num = 7;
    int a = num;
    cout << " a before: " << num << endl;
    a++;
    cout << " a after: " << num << endl;

    // cout << num << endl;

    int *ptr = &num;
    cout << "before: " << num << endl;
    (*ptr)++;
    cout << "after: " << num << endl;
    // copying a pointer
    int *q = ptr;

    cout << ptr << " = " << q << endl;
    cout << *ptr << " = " << *q << endl;

    // important concept
    int j = 3;
    int *t = &j;
    // cout << (*t)++ << endl;
    *t = *t + 1;
    cout << *t << endl;
    cout << "before t " << t << endl;
    t = t + 1;
    cout << "after t " << t << endl;

    return 0;
}