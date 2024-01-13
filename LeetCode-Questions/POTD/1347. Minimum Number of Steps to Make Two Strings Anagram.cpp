#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Approach : Hashmap
    // Time complexity : O(n) -> n is the number of characters
    // Space complexity : O(1)
    int minSteps(string s, string t)
    {

        int count[26] = {0};

        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        int ans = 0;

        for (int i = 0; i < 26; i++)
        {
            ans += max(0, count[i]);
        }

        return ans;
    }
};

int main()
{

    return 0;
}