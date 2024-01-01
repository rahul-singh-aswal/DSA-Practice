#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // Approach : Greedy - Two Pointer
        // Time complexity : O(nlogn + mlogm)
        // Space complexity : O(logn + logm) - used for sorting

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int contentChildren = 0;
        int cookieIndex = 0;

        while(cookieIndex < s.size() && contentChildren < g.size()){
            if (s[cookieIndex] >= g[contentChildren]) {
                contentChildren++;
            }
            cookieIndex++;
        }

        return contentChildren;

        
    }
};

int main()
{
    

    return 0;
}

