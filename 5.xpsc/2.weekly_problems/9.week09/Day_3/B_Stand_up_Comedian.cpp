/**
* author : _Grandmaster
* created : 27-11-2023 10:27:36
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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==0){
        cout<<1<<endl;
        return;
    }
    if(a!=0 && b==0 && c==0 &&d==0){
        cout<<a<<endl;
        return;
    }
    cout<<a+min(c,b)*2+min(a+1,abs(b-c)+d)<<endl;
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}