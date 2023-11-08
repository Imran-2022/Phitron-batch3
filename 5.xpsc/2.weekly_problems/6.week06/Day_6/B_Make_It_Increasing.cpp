/**
* author : _Grandmaster
* created : 08-11-2023 14:43:41
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
    cin>>n;
    vi vt(n);
    fl(i,0,n)cin>>vt[i];
    int cnt=0;
    if(n==1){
        cout<<"0"<<endl;
        return;
    }
    while(true){
        bool flag=false;
        fl(i,1,n){
            if(vt[i]<=vt[i-1]){
                cnt++;
                vt[i-1]/=2;
                flag=true;
            }
        }
        if(!flag){
            cout<<cnt<<endl;
            return;
        }
        if(vt[0]==0 &&vt[1]==0){
            cout<<-1<<endl;
            return;
        }
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