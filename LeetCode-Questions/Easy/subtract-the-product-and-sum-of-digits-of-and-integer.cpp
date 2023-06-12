// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int product = 1, sum = 0;
        while (n)
        {
            int rem = n % 10;
            sum += rem;
            product *= rem;
            n /= 10;
        }
        return product - sum;
    }
};