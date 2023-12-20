/**
* author : _Grandmaster
* created : 19-12-2023 23:41:54
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

bool isprime(ll n) {
    if(n%2 == 0 && 2 < n) 
        return false;
    for(int i=3;i*i<=n;i+=2) 
        if(n%i == 0) 
            return false;
    return true;
}

void solve(){
    ll n; 
    cin >> n; 
    ll nn = sqrt(n);
    if(nn*nn != n || n == 1) cout<<"NO"<<endl;
    else {
        if(isprime(nn))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}

