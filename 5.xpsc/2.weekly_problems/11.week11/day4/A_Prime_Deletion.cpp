/**
* author : _Grandmaster
* created : 13-12-2023 18:50:44
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
    string s;
    cin>>s;
    int cnt_3=0,cnt_7=0;
    int i=0;
    fl(i,0,9){
        if(s[i]=='3'){
            cnt_3++;
            break;
        }
        if(s[i]=='7'){
            cnt_7++;
            break;
        }
    }
    if(cnt_3)cout<<"37"<<endl;
    else cout<<"73"<<endl;
}

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}