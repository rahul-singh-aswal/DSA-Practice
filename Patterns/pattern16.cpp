#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    char ch = 'A';

    while (i <= n)
    {

        int j = 1;
        int count = 0;

        while (j <= i)
        {

            cout << ch << " ";
            j += 1;
            ch = ch + 1;
        }

        cout << endl;
        i += 1;
    }

    return 0;
}