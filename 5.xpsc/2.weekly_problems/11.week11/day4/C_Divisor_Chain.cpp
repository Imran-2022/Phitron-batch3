/**
* author : _Grandmaster
* created : 13-12-2023 15:44:14
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
    ll x;
    cin>>x;
    vector < ll > a;
    a.push_back(x);
    while (__builtin_popcount(x) > 1){ // no of set bits
        ll p = __builtin_ctz(x); // no of trailing 0s - To get Most Significant Bit
        x -= (1 << p); // x = x - pow(2,p)
        a.push_back(x);
    }
    while (x > 1){
        x /= 2;
        a.push_back(x);
    }
    ll k = (ll)a.size();
    cout<<k<<endl;
    for (ll i = 0; i < k; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}