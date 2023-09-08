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
    int dp[n + 1][s + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (a[i - 1] <= s)
            {
                int op1 = dp[i - 1][j - a[i - 1]];
                int opt2 = dp[i - 1][j];
                dp[i][j]=op1+opt2;
            }
            else
            {
                int opt2 = dp[i - 1][j];
                dp[i][j]=opt2;
            }
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=s;j++){
           cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    // if(dp[n][s])cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;


    return 0;
}

/*
 
input: 
5
0 0 0 0 7
7

output:
1 0 0 0 0 0 0 0 
2 0 0 0 0 0 0 0 
4 0 0 0 0 0 0 0 
8 0 0 0 0 0 0 0 
16 0 0 0 0 0 0 0 
16 0 0 0 0 0 0 16 


*/