#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void solve()
{
    int n, s;
    cin >> n >> s;
    s = 1000 - s;
    int w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int dp[n + 1][s + 1];
    dp[0][0] = 1;

    for (int i = 1; i <= s; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (w[i - 1] <= j)
            {
                dp[i][j] = (dp[i][j] + dp[i][j - w[i - 1]]) % MOD;
            }
        }
    }
    if (dp[n][s] == 0)
        cout << "0" << endl;
    else
        cout << dp[n][s] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
