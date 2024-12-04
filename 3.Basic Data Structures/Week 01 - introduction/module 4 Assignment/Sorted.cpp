#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>

void start_here(){
    int n;
    cin>>n;
    vi vt(n);
    fl(i,0,n)cin>>vt[i];
    if(is_sorted(all(vt)))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)start_here();
    return 0;
}