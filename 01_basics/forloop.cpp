#include <iostream>
using namespace std;

void printFibonacci(int n)
{
    if (n == 1)
    {
        cout << 0 << " ";
    }

    else if (n == 2)
    {
        cout << 0 << " ";
    }

    else
    {
        int a = 0;
        int b = 1;
        int c = 1;

        int i;
        cout << 0 << " " << 1 << " ";
        for (i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    }
}

void printAtoZ()
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch = ch + 1)
    {
        cout << ch << " ";
    }
    cout << endl;
}

int main()
{
    printAtoZ();
    printFibonacci(15);
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int i = 1;

    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }

    for (int a = 0, b = 1; a >= 0 && b >= 1; a--, b--)
    {
        cout << a << " " << b << endl;
    }

    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
    {
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}