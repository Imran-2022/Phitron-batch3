#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool dp[n + 5];
        for (int i = 0; i <= n; i++){
            dp[i] = false;
        }
        dp[1] = true;
        for (int i = 1; i <= n; i++)
        {
            if (dp[i])
            {
                if (i + 3 <= n)
                    dp[i + 3] = true;
                if (i * 2 <= n)
                    dp[i * 2] = true;
            }
        }

        // for(auto x:dp)cout<<x<<" ";
        
        if (dp[n])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}