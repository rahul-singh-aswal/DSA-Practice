#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= (n - i + 1))
        {
            cout << j << " ";
            j++;
        }

        int star = 2 * (i - 1);
        while (star)
        {
            cout << "* ";
            star--;
        }

        int start = n - i + 1;
        while (start)
        {
            cout << start << " ";
            start--;
        }

               cout << endl;
        i++;
    }

    return 0;
}