/**
* author : _Grandmaster
* created : 02-12-2023 16:40:05
**/

#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define newline cout << endl;
#define e '\n'
#define fl(i, a, n) for (long long i = a; i < n; i++)
#define F first
#define S second
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define si set<int>
#define vi vector<long long>
#define vvi vector<vi>
#define pii pair<int, int>
#define print(a)for (auto x : a)cout << x << ' ';cout<<e;
#define print1(a)for (auto x : a)cout << x.F << ' ' << x.S << endl;
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vi vt1(n);
    ll i,j;

    fl(i,0,n)cin>>vt1[i];
    sort(all(vt1));
    cout<<(n+1)/2-1<<endl;

    vi vt2(n);
    j=0;
    fl(i,1,n){
        vt2[i]=vt1[j];
        i++;
        j++;
    }
    fl(i,0,n){
        vt2[i]=vt1[j];
        i++;
        j++;
    }

    fl(i,0,n)cout<<vt2[i]<<" ";

    cout<<endl;

}

int main()
{
    IMRAN
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}