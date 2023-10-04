/**
 * problem link : https://codeforces.com/problemset/problem/1604/A
 * 
 * comment : :  amazing problem  , try again later.
 * 
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
      int k; cin >> k;
      ans = max(ans, k - i);
    }
    cout << ans << '\n';
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}