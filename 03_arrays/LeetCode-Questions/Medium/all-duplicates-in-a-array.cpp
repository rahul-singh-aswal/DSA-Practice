//https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;

        unordered_map<int, int>mp;
        
        int i=0;
        while(i<nums.size()) {
            if(mp[nums[i]] == 0) {
                mp[nums[i]]++;
            }
            else {
                ans.push_back(nums[i]);
            }
            i++;
        }
        

        return ans;
        
        
    }
};