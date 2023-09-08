#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;
    bool dp[n + 1][s + 1];
    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (a[i - 1] <= s)
            {
                bool op1 = dp[i - 1][j - a[i - 1]];
                bool opt2 = dp[i - 1][j];
                dp[i][j]=op1||opt2;
            }
            else
            {
                bool opt2 = dp[i - 1][j];
                dp[i][j]=opt2;
            }
        }
    }

    // for(int i=0;i<=n;i++){
    //     for(int j=0;j<=s;j++){
    //         if(dp[i][j])cout<<"T"<<" ";
    //         else cout<<"F"<<" ";
    //     }
    //     cout<<endl;
    // }

    if(dp[n][s])cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}

/*
 
input: 
NO

output:
4
1 2 4 6
7

*/