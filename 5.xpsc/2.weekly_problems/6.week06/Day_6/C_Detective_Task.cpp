/**
* author : _Grandmaster
* created : 08-11-2023 15:33:26
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
    string s;
    cin>>s;
    int cnt_l=0,cnt_r=s.size()-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')cnt_l=i;
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='0')cnt_r=i;
    }

    if(abs(cnt_l-cnt_r)+1>0){
        cout<<abs(cnt_l-cnt_r)+1<<endl;
    }else{
        cout<<1<<endl;
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