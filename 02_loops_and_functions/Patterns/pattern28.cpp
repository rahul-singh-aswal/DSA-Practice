#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp;

    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <=n; j++) {
            cout << n-i-j << " ";
            
        }
        // temp = temp-1;
        cout << endl;
    }


   
    

    



    return 0;
}