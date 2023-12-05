/**
* author : _Grandmaster
* created : 05-12-2023 19:26:44
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
    int n,i,j;
    string s[1000];
    set<int>st[1000];
    cin>>n;
    fl(i,0,n){
        cin>>s[i];
        st[i].insert(i+1);
    }
    fl(i,0,n){
        fl(j,0,n){
            if(s[i][j]=='1')st[j].insert(i+1);
        }
    }
    fl(i,0,n){
        cout<<st[i].size()<<" ";
        for(auto x:st[i])cout<<x<<" ";
        cout<<endl;
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