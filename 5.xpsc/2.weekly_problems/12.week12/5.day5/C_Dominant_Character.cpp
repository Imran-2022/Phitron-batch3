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

vector<string> vt = {"aa", "aba", "aca", "abca", "acba", "abbacca", "accabba"};

void solve() {
    int n, i;
    cin >> n;

    string s;
    cin >> s;
    fl(i, 0, vt.size()) {
        if (s.find(vt[i]) != string::npos) {
            cout << vt[i].size() << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    IMRAN
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
