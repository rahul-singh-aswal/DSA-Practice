#include <iostream>
#include <climits>
using namespace std;

int getMin(int num[], int n) {
    int min_num = INT_MAX;

    for (int i = 0; i < n; i++) {
        min_num = min(min_num, num[i]);
    }

    return min_num;
} 


int getMax(int num[], int n) {
    int max_num = num[0];

    for (int i = 0; i < n; i++) {
        max_num = max(max_num, num[i]);
    }

    return max_num;
} 





int main()
{
    int size;
    cin >> size;

    int num[100];
    int sum = 0;


    for (int i = 0; i < size; i++) {
        cin >> num[i];
        sum = sum + num[i];
    }

    cout << "Maximum value is : " << getMax(num, size) << endl;
    cout << "Manimum value is : " << getMin(num, size) << endl;
    cout << "Sum of all elements : " << sum << endl;




    return 0;
}