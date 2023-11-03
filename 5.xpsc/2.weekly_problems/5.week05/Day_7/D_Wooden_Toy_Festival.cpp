/**
 * author : _Grandmaster
 * created : 03-11-2023 18:54:41
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
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve()
{
    int n, a[200005];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int l = 0, r = 1e9;
    while (l < r)
    {
        int m = (l + r) / 2, i = 1, j = n;
        while (i + 1 <= n && a[i + 1] - a[1] <= 2 * m){
            i++;
        }
           
        while (j - 1 > 0 && a[n] - a[j - 1] <= 2 * m){
            j--;
        }
        
        i++, j--;
        
        if (i > j || a[j] - a[i] <= 2 * m){
            r = m;
        }
        else{
            l = m + 1;
        }
           
    }
    cout << l << endl;
}

int main()
{
    IMRAN
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}