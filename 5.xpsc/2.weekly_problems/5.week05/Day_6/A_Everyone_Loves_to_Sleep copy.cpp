/**
* author : _Grandmaster
* created : 01-11-2023 11:55:20
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
    int t,h,m;
    cin>>t>>h>>m;
    int time=60*h +m;
    int ans=24*60;
    while(t--){
        int h,m;
        cin>>h>>m;
        int alarm_time=h*60+m;
        if(alarm_time-time<0){
            alarm_time+=60*24;
        }
        int diff= alarm_time-time;
        ans=min(ans,diff);
    }

    cout<<ans/60<<" "<<ans%60<<endl;
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}