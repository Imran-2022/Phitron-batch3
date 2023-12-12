/**
* author : _Grandmaster
* created : 11-12-2023 22:55:16
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

    int n,k,i,j;
    cin>>n>>k;

    string s;
    cin>>s;

    if(k%2==0){
        sort(all(s));
        cout<<s<<endl;
        return;
    }

    vector<char>even,odd;

    fl(i,0,n){
        if(i%2)odd.pb(s[i]);
        else even.pb(s[i]);
    }
    sort(all(even));
    sort(all(odd));
    string ans;
    int a=0,b=0;

    for(a,b;a<even.size()||b<odd.size();a++,b++){
        if(a<even.size())ans+=even[a];
        if(b<odd.size())ans+=odd[b];
    }

    cout<<ans<<endl;

}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}