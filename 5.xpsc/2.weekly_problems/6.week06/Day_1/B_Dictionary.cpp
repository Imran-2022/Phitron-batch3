/**
* author : _Grandmaster
* created : 05-11-2023 18:45:05
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
    int cnt=1;
    // cout<<'a'-96<<endl; equal - 1
    // cout<<'b'-'a'<<endl; equal - 1
    int lp=s[0]-'a';
    while(lp){
        cnt+=25;
        lp--;
    }
    cnt+=s[1]-'a';
    if(s[0]-'a'<=(s[1]-'a'))cnt--;
    cout<<cnt<<endl;

}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}