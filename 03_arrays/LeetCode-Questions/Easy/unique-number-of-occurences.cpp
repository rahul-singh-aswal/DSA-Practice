// https://leetcode.com/problems/unique-number-of-occurrences/

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        if (arr.size() == 2)
        {
            if (arr[0] == arr[1])
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        sort(arr.begin(), arr.end());

        vector<int> arr1;
        int count = 1;
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] == arr[i - 1])
            {
                count++;
            }
            else
            {
                arr1.push_back(count);
                count = 1;
            }
        }

        sort(arr1.begin(), arr1.end());

        for (int i = 1; i < arr1.size(); i++)
        {
            if (arr1[i] == arr1[i - 1])
            {
                return false;
            }
        }

        return true;
    }
};