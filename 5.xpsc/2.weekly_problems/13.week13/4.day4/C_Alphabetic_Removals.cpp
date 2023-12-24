/**
* author : _Grandmaster
* created : 24-12-2023 06:19:45
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
    int n,k;
    cin>>n>>k;
    string s1,s2;

    cin>>s1;s2=s1;
    sort(all(s2));

    int frq[26]={0};

    fl(i,0,k)frq[s2[i]-'a']++;

    fl(i,0,n){
        if(frq[s1[i]-'a']){
            frq[s1[i]-'a']--;
        }else cout<<s1[i];
    }
}

int main()
{
    IMRAN
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}