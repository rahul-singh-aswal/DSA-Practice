#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str, int i, int j) {
    cout << "call received for " << str << endl;
    // base case
    if (i>j) {
        return;
    }

    swap(str[i],str[j]);
    i++;
    j--;

    reverseString(str, i, j);
}

int main()
{
    string name = "rahul";

    cout << "Before : " << name << endl;
    reverseString(name, 0, name.length()-1 );
    cout << "After : " << name << endl;




    return 0;
}