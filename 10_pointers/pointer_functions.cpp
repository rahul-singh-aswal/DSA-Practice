#include <bits/stdc++.h>
using namespace std;

void print(int *p)
{
    cout << p << endl;
}

void update(int *p)
{

    *p = *p + 1;
    p = p + 1;
    cout << "Inside update : " << p << endl;
}

int getSum(int *arr, int n)
{

    cout << endl
         << "Size is : " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i[arr];
    }

    return sum;
}

int main()
{
    int value = 7;
    int *p = &value;

    print(p);

    cout << "Before update p : " << p << endl;
    cout << "Before update *p : " << *p << endl;

    update(p);

    cout << "After update p : " << p << endl;
    cout << "After update *p : " << *p << endl;

    int arr[6] = {1, 2, 3, 4, 5,8};

    cout << "Sum is : " << getSum(arr+3, 3) << endl;

    return 0;
}