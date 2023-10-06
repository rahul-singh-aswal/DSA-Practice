#include <bits/stdc++.h>
using namespace std;

void pattern23(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}

void pattern22(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void pattern21(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= (n - i + 1); j++)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= (n - i + 1); j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= (n - i + 1); j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            char ch = 'a' + i - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'F' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j * j * j << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    // int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // cout << count << " ";
            // count++;
            cout << (i - 1) * n + j << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char ch = 'a' + j - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'a' + i - 1;
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j * j << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "10 ";
        }
        cout << endl;
    }
}

void pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    pattern1(n);
    cout << endl;

    pattern2(n);
    cout << endl;

    pattern3(n);
    cout << endl;

    pattern4(n);
    cout << endl;

    pattern5(n);
    cout << endl;

    pattern6(n);
    cout << endl;

    pattern7(n);
    cout << endl;

    pattern8(n);
    cout << endl;

    pattern9(n);
    cout << endl;

    pattern10(n);
    cout << endl;

    pattern11(n);
    cout << endl;

    pattern12(n);
    cout << endl;

    pattern13(n);
    cout << endl;

    pattern14(n);
    cout << endl;

    pattern15(n);
    cout << endl;

    pattern16(n);
    cout << endl;

    pattern17(n);
    cout << endl;

    pattern18(n);
    cout << endl;

    pattern19(n);
    cout << endl;

    pattern20(n);
    cout << endl;

    pattern21(n);
    cout << endl;

    pattern22(n);
    cout << endl;

    pattern23(n);
    cout << endl;

    return 0;
}