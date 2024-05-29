#include <bits/stdc++.h>
using namespace std;

// Recursive Solution
int solve(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return solve(n - 1) + solve(n - 2);
}

// Top Down Approach
int solveMem(int n, vector<int> &dp)
{
    if (n <= 2)
    {
        return 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = solveMem(n - 1, dp) + solveMem(n - 2, dp);
}

// Bottom Up Appraoch
int solveTab(int n)
{
    vector<int> dp(n + 1, 0);
    dp[1] = dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

// Space Optimization
int solveSO(int n)
{
    int prev1 = 1;
    int prev2 = 1;

    for (int i = 3; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main()
{
    int n;
    cin >> n;

    // int ans = solve (n);

    // vector<int> dp (n+1, -1);
    // int ans = solveMem(n, dp);

    // int ans = solveTab(n);

    int ans = solveSO(n);

    cout << ans << endl;

    return 0;
}