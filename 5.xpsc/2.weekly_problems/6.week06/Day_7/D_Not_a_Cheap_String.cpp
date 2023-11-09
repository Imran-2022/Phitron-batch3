/**
* author : _Grandmaster
* created : 09-11-2023 23:34:35
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

    int n,i;
    string s;
    cin>>s>>n;
    string w(s);
    sort(w.rbegin(),w.rend());
    int total_cost=0;
    fl(i,0,s.size())total_cost+=s[i]-'a'+1;
    map<char,int>mp;
    fl(i,0,w.size()){
        if(total_cost>n){
            mp[w[i]]++;
            total_cost-=w[i]-'a'+1;
        }
    }
    fl(i,0,s.size()){
        if(mp[s[i]]>0){
            mp[s[i]]--;
            continue;
        }
        cout<<s[i];
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