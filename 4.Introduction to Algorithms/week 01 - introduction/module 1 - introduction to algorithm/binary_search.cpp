// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>

void start_here(){
    int n,q;
    cin>>n>>q;
    vi vt(n);
    fl(i,0,n)cin>>vt[i];
    sort(all(vt));
    while(q--){
        int fnd;
        cin>>fnd;
        int L=0;
        int R=n-1;
        bool flag=false;
        while(L<=R){
            // int mid=(L+R)/2;
            // better to use , 
            int mid = L + (R - L) / 2;

            if(vt[mid]==fnd){
                flag=true;
                break;
            }
            if(vt[mid]>fnd)R=mid-1;
            else L=mid+1;
        }
        if(flag)cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--)start_here();
    return 0;
}