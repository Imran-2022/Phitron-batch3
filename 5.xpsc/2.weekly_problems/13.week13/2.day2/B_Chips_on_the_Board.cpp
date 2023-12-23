/**
* author : _Grandmaster
* created : 23-12-2023 20:19:33
**/

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define newline cout << endl;
#define e '\n'
#define fl(i, a, n) for (int i = a; i < n; i++)
#define F first
#define S second
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define si set<int>
#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define print(a)for (auto x : a)cout << x << ' ';cout<<e;
#define print1(a)for (auto x : a)cout << x.F << ' ' << x.S << endl;
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve(){
    int n, i;
    cin >> n;
    vi vt(n), vt2(n);
    fl(i,0,n) cin >> vt[i];
    fl(i,0,n) cin >> vt2[i];

    // rlst 1
    ll sm = accumulate(all(vt), 0LL); 
    sort(all(vt2));
    ll rslt1 = vt2[0] * 1LL * n + sm; 

    // rlst 2
    sm = accumulate(all(vt2), 0LL);
    sort(all(vt));
    ll rslt2 = vt[0] * 1LL * n + sm; 
    
    // print mx
    cout << min(rslt1, rslt2) << endl;
}

int main(){
    IMRAN
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
