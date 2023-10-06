#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,2,4,5,7};
    char ch[6] = "abcde";

    cout << "print int array : " << arr << endl;
    cout << "print char array : " << ch << endl;

int *ptr = &arr[0];
cout << "print array pointer : " << ptr << endl;
    

    char *p = &ch[0];
cout << "print char pointer : " << p << endl;

char temp = 'z';
char *p1 = &temp;
cout << "Pointer to temp : " << p1 << endl;
    
    



    return 0;
}