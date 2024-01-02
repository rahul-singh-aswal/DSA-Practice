#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        // Approach : Frequency Counter
        // Time complexity : O(N)
        // Space complexity : O(N) -> space used by frequency counter
        vector<vector<int>> ans;

        vector<int> count(nums.size()+1);

        for (int i : nums) {
            if (count[i] >= ans.size()) {
                ans.push_back({});
            }
            ans[count[i]].push_back(i);
            count[i]++;
        }

        return ans;
        
    }
};

int main()
{
    return 0;
}