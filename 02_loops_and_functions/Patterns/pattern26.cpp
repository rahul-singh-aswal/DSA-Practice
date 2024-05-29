#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << "  ";
            space--;
        }

        int j = 1;
        int count = 1;
        
        while (j <= i)
        {
            
            
            cout << count << " ";
            count ++;
            j++;
        }
        int k = 1;
        count --;
        while (k < i) {
            count --;
            cout << count << " ";
            k ++;
        }
        cout << endl;
        i++;
    }

    return 0;
}