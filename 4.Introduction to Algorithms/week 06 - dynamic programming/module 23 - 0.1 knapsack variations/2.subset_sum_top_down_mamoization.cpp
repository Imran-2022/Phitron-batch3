#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

bool subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return true;
        else
            return false;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        bool op1 = subset_sum(n - 1, a, s - a[n - 1]);
        bool op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 || op2; // true means 1, false means 0.
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, a, s);
    }
}

int main()
{
    
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 1005; i++)
    {
        for (int j = 0; j < 1005; j++)
        {
            dp[i][j] = -1;
        }
    }
    
    int s;
    cin >> s;
    if (subset_sum(n, a, s))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}