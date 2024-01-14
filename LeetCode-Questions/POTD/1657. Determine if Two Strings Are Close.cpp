#include <bits/stdc++.h>
using namespace std;

/* Approach : simple rules -> 1. length of the string should be equal
2.Both strings must have the same amount of characters regardless of their frequencies
3.Both strings must have the same frequency table regardless of which character the frequency represents
*/
// Time complexity : O(n) as we know n is 26 here
// Space complexity : O(1)

class Solution
{
public:
    bool closeStrings(string word1, string word2)
    {
        if (word1.size() != word2.size())
        {
            return 0;
        }
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);

        for (char ch : word1)
        {
            freq1[ch - 'a']++;
        }
        for (char ch : word2)
        {
            if (freq1[ch - 'a'] == 0)
                return false;
            freq2[ch - 'a']++;
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        for (int i = 0; i < 26; i++)
        {
            if (freq1[i] != freq2[i])
                return false;
        }

        return true;
    }
};

int main()
{

    return 0;
}