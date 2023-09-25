#include <iostream>
using namespace std;

int main()
{
    // create 2D Array
    int arr[3][4];

    // taking input -> row wise input
    // for (int row=0; row<3; row++) {
    //     for (int col=0; col<4; col++) {
    //         cin >> arr[row][col];
    //     }
    // }

    /*

    // taking input -> col wise input
     for (int col=0; col<4; col++) {
         for (int row=0; row<3; row++) {
             cin >> arr[col][row];
         }
     }

     */

    int arr2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int arr3[3][4] = {{0, 1, 2, 3}, {4, 3, 2, 1}, {5, 6, 7, 8}};

    // printing 2D Array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}