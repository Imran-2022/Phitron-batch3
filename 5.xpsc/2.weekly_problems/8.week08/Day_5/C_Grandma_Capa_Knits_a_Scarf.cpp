/**
* author : _Grandmaster
* created : 23-11-2023 14:04:43
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
    string s;
    cin>>s;
    int result=n+1;
    fl(i,0,26){
            int left=0;
            int right=n-1;
            int cnt=0;
            while(left<=right){
                    if (s[left] == s[right]) left++, right--;
                    else if (s[left] == char('a' + i)) cnt++, left++;
                    else if (s[right] == char('a' + i)) cnt++, right--;
                    else { cnt = n + 1; break;
                }
            }
            result=min(result,cnt);
        }
        if((result-1)==n)cout<<"-1"<<endl;
        else cout<<result<<endl;
    }

int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}