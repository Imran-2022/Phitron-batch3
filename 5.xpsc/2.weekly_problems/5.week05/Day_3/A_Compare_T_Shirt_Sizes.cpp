/**
* author : _Grandmaster
* created : 29-10-2023 17:27:57
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

int cmp(string s){
    if(s=="M")return 0;
    if(s.back()=='S')return - s.size();
    else return s.size();
}

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    if(cmp(s1)==cmp(s2)){
        cout<<"="<<endl;
    }else if(cmp(s1)>cmp(s2)){
        cout<<">"<<endl;
    }else{
        cout<<"<"<<endl;
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