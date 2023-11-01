/**
* author : _Grandmaster
* created : 01-11-2023 18:54:03
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
    int i,n;
    string s;
    cin>>s;
    n=s.size();

    vector<pair<char,int>>vt;
    char mn=min(s[0],s[n-1]);
    char mx=max(s[0],s[n-1]);
    fl(i,0,n){
        if(s[i]>=mn && s[i]<=mx)vt.push_back({s[i],i});
    }

    // sort(all(vt),[&](pair<char,int>a,pair<char,int>b){return a.second<b.second;});
    
    if(vt.size()>2){
        sort(vt.begin()+1,vt.begin()+vt.size()-1,[&](pair<char,int>a,pair<char,int>b){
            if(s[0]>s[n-1]){
                return a.first>b.first;
            }
            return a.first<b.first;
        });
    }
    vector<int>seq;
    ll moves=0;
    seq.push_back(1);

    fl(i,1,vt.size()){
         moves+=abs(vt[i-1].first-vt[i].first);
        seq.push_back(vt[i].second+1);
    }

    cout<<moves<<" "<<seq.size()<<endl;
    
    for(auto i:seq){
        cout<<i<<" ";
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