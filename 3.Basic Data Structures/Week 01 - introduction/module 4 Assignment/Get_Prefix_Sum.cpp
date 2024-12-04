#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<ll>

void start_here(){
    int n;
    cin>>n;
    vi vt(n);
    fl(i,0,n)cin>>vt[i];
    vi vt2(n);
    vt2[0]=vt[0];
    fl(i,1,n){
        vt2[i]=vt[i]+vt2[i-1];
    }
    reverse(all(vt2));
    for(auto x:vt2)cout<<x<<" ";
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)start_here();
    return 0;
}