// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

int findDuplicate(vector<int> &arr) 
{
    int ans=0;

    //XOR all elements of array
    for (int i=0; i<arr.size(); i++) {
        ans = ans^arr[i];
    }

    //XOR 1 to N-1 from ans
    for(int i=1; i<arr.size(); i++) {
        ans = ans^i;
    }

    return ans;
	
}
