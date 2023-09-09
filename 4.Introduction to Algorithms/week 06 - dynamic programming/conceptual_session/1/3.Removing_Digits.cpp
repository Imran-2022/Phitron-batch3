#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int> &dp)
{

    if (n <= 2)
        return n;
    if (dp[n] != INT_MAX)
        return dp[n];
    vector<int> vt;
    for (char ch : to_string(n))
    {
        vt.push_back(ch - '0');
    }
    for (int x : vt)
    {
        dp[n] = min(dp[n], solve(n - x, dp) + 1);
    }
    return dp[n];
}

int main()
{

    int n;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX);

    cout << solve(n, dp) << endl;

    return 0;
}