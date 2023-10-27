/**
 * author : _Grandmaster
 * created : 27-10-2023 18:29:05
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
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve()
{
    int n,m,i,cs=1;
    while(cin>>n>>m && n+m){
        vi vt(n);
        fl(i,0,n)cin>>vt[i];
        sort(all(vt));
        cout<<"CASE# "<<cs<<":\n";
        fl(i,0,m){
            int y;cin>>y;
            auto x= lower_bound(all(vt),y);
            if(x!=vt.end() && *x==y){
                cout<<y<<" found at "<< x-vt.begin()+1<<endl;
            }else{
                cout<<y<<" not found\n";
            }
        }
        cs++;

    }
}

int main()
{
    IMRAN
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}