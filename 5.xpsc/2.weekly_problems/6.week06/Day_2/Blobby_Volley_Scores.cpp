/**
* author : _Grandmaster
* created : 06-11-2023 19:58:00
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
    int n;
    cin>>n;
    string s;
    cin>>s;
    char ch='A';
    int cnt_A=0,cnt_B=0;
    for(int i=0;i<n;i++){
        if(s[i]==ch){
            if(ch=='A')cnt_A++;
            else cnt_B++;
        }else{
            if(ch=='A')ch='B';
            else ch='A';
        }
    }
    cout<<cnt_A<<" "<<cnt_B<<endl;
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}