/**
* author : _Grandmaster
* created : 28-10-2023 23:49:45
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

int numbers[10005];

void solve(int T){
    int N, Q;
    
    while (cin >> N >> Q, N || Q)
    {
        for (int i = 0; i < N; ++i)
            cin >> numbers[i];
        
        sort(numbers, numbers + N);
        
        cout << "CASE# " << T++ << ":\n";
        while (Q--)
        {
            int n;
            cin >> n;
            
            auto iter = lower_bound(numbers, numbers + N, n);
            if (iter == numbers + N || *iter != n)
                cout << n << " not found\n";
            else
                cout << n << " found at " << (iter - numbers) + 1 << '\n';
        }
    }
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve(t);
    return 0;
}