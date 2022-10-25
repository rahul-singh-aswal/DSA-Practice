#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter the character";
    cin >> ch;

    if (ch >= '0' && ch <= '9')
    {
        cout << "This is numeric";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is uppercase";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is lowercase";
    }

    return 0;
}