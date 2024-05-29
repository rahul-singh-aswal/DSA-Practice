#include <bits/stdc++.h>
using namespace std;

int &func(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}

int *fun(int n)
{
    int *ptr = &n;
    return ptr;
}
void update2(int &n)
{
    n++;
}

void update1(int n)
{
    n++;
}

int main()
{

    /*
    int i=5;
    //creating a reference variable

    int &j = i;
    cout << i <<  endl;
    i++;
    j++;
    cout << i <<  endl;
    cout << j <<  endl;


*/

    int n = 5;
    cout << "Before update1(): " << n << endl;
    update1(n);
    cout << "After update1(): " << n << endl;
    cout << "Before update2(): " << n << endl;
    update2(n);
    cout << "After update2(): " << n << endl;

    cout << func(n) << endl;

    cout << fun(n) << endl;

    return 0;
}