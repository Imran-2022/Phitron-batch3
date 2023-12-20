/**
 * author : _Grandmaster
 * created : 20-12-2023 23:21:34
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
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;

void solve()
{
    int n, i;
    cin >> n;
    vi vt(n), vt2(n);
    fl(i, 0, n) cin >> vt[i];
    sort(all(vt));
    int pos = 0;
    fl(i, 0, n)
    {
        vt2[i] = vt[pos];
        pos++;
        i++;
    }
    fl(i, 1, n)
    {
        vt2[i] = vt[pos];
        pos++;
        i++;
    }
    bool check=true;
    fl(i, 0, n)
    {
        if ((vt2[i] < vt2[(i - 1 + n) % n] && vt2[i] < vt2[(i + 1) % n]) || (vt2[i] > vt2[(i - 1 + n) % n] && vt2[i] > vt2[(i + 1) % n]));
        else
        {
            check=false;
        }
    }

    if(check){
        cout << "YES" << endl;
            for (auto i : vt2)
            {
                cout << i << ' ';
            }
            cout << endl;
            return;
    }
    else cout<<"NO"<<endl;
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