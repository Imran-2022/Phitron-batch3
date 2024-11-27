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
    int cnt_pos=0,cnt_neg=0;
    fl(i,0,n){
        if(vt[i]>=1)cnt_pos++;
        else if(vt[i]<0) cnt_neg++;
    }
    int sm=cnt_pos-cnt_neg;
    sm=abs(sm);
    int op=0;
    if(sm%2==0)op=sm/2;
    else op=(sm/2)+1;
    cout<<op<<endl;

}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)start_here();
    return 0;
}