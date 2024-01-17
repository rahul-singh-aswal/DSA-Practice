#include <bits/stdc++.h>
using namespace std;

// Approach : count the frequency and then unique frequency
// Time complexity : O(n)
// Space complexity : O(n)

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {

        unordered_map<int, int> freq;

        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }

        unordered_set<int> s;
        for (auto i : freq)
        {
            s.insert(i.second);
        }

        return freq.size() == s.size();
    }
};

int main()
{

    return 0;
}