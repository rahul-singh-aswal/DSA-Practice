#include <bits/stdc++.h>
using namespace std;

// Approach : Counting
// Time complexity : O(N)
// Space complexity : O(N)

class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> count;

        for (int i:nums){
            count[i]++;
        }
        int ans = 0;

        for (auto i:count){
            if(i.second == 1) {
                return -1;
            }
            ans += ceil((i.second+2)/3);
        }

        return ans;
        
    }
};

int main()
{



    return 0;
}