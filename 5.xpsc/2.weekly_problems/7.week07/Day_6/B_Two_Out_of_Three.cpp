/**
* author : _Grandmaster
* created : 16-11-2023 21:33:10
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
    int b,c;
    cin>>b;
    vector<int>v[101],v2;
    vector<int>v3(b,1);
    map<int,int>m;
    for(int i=0;i<b;i++)
    {
        cin>>c;
        v[c].push_back(i);
        if(v[c].size()==2)
            v2.push_back(c);
    }
    if(v2.size()<2)
        cout<<"-1\n";
    else
    {
        for(int i=1;i<v[v2[0]].size();i++)
            v3[v[v2[0]][i]]=2;
        for(int i=1;i<v[v2[1]].size();i++)
            v3[v[v2[1]][i]]=3;
        for(int i=0;i<b;i++)
            cout<<v3[i]<<" ";
        cout<<'\n';
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