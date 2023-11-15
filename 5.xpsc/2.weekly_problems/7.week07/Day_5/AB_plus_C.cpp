/**
* author : _Grandmaster
* created : 15-11-2023 18:25:38
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

    ll n;
    cin>>n;
    
    if(n==1){
        cout<<-1<<endl;
        return;
    }

    if(n==2){
        cout<<1<<" "<<1<<" "<<1<<endl;
        return;
    }

    if(n<=1e6){
        cout<<1<<" "<<n-1<<" "<<1<<endl;
        return;
    }

    if(n%1000000==0){
        cout<<(n/1000000)-1<<" "<<1000000<<" "<<1000000<<endl;
    }
    else{
        cout<<n/1000000<<" "<<1000000<<" "<<n%1000000<<endl;
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