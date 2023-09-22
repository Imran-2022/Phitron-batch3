#include <bits/stdc++.h>
using namespace std;
const int MAX_SUM = 50005;

int dp[1005][MAX_SUM];
const int MOD = 1e9 + 7;

int subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return 1;
        else
            return 0;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        int op1 = subset_sum(n - 1, a, s - a[n - 1]);
        int op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = (op1 + op2) % MOD;
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, a, s) % MOD;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if ((s + sum) % 2 != 0)
        {
            cout << "0" << endl;
            continue;
        }
        s = (s + sum) / 2;

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                dp[i][j] = -1;
            }
        }

        cout << subset_sum(n, a, s) << endl;
    }
    return 0;
}
