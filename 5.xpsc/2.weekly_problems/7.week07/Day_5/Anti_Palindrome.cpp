/**
* author : _Grandmaster
* created : 15-11-2023 18:13:56
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    int odd_cnt=0,cnt=0;
    for(int  i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(auto [x,y]:mp){
        if(y&1){
            odd_cnt++;
            cnt+=y;
        }
    }
    if(odd_cnt>1)cout<<0<<endl;
    else if(odd_cnt==0)cout<<1<<endl;
    else if(odd_cnt==1 && cnt==n)cout<<2<<endl;
    else cout<<1<<endl;

}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}