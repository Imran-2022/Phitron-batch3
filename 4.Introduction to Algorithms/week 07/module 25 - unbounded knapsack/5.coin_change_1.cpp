#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int s;
    cin >> s;
    bool dp[n + 1][s + 1];
    dp[0][0] = true;

    for (int i = 1; i <= s; i++)
        dp[0][i] = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (w[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - w[i - 1]] || dp[i - 1][j];
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    if(dp[n][s])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

/*
input:
3
1 2 3
5

output:
yes

*/