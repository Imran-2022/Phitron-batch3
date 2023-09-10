#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int dp[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<endl;
    int mx=0;
    int ci,cj;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(dp[i][j]>mx){
                mx=dp[i][j];
                ci=i;
                cj=j;
            }
        }
    }
    
    cout<<mx<<endl;

    string ans;

    while(ci!=0 && cj!=0){
        if(a[ci-1]==b[cj-1]){
            ans+=a[ci-1];
            ci--;
            cj--;
        }else{
            break;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}

/*

input:

aceghr
acaeghbr


output:

0 0 0 0 0 0 0 0 0 
0 1 0 1 0 0 0 0 0 
0 0 2 0 0 0 0 0 0 
0 0 0 0 1 0 0 0 0 
0 0 0 0 0 2 0 0 0 
0 0 0 0 0 0 3 0 0 
0 0 0 0 0 0 0 0 1 

3
egh


*/