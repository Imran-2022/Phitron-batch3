/**
* author : _Grandmaster
* created : 22-11-2023 17:08:30
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
    char ch;
    cin>>ch;
    string s;
    cin>>s;

    int cnt_ch=0,idx=-1;
    fl(i,0,n){
        if(s[i]==ch){
            idx=i+1;
            cnt_ch++;
        }
    }
    if(cnt_ch==n)cout<<"0"<<endl;
    else {
        if(idx>n/2){
            cout<<1<<endl;
            cout<<idx<<endl;
        }
        else {
            cout<<2<<endl;
            cout<<n<<" "<<n-1<<endl;
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