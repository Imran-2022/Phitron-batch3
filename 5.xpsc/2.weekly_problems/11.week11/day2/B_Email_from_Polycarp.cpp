/**
* author : _Grandmaster
* created : 11-12-2023 19:36:03
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

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int i = 0, j = 0;
    while (i < s1.size() && j < s2.size()) {
        if (s1[i] != s2[j]) {
            cout << "NO" << endl;
            return;
        }
        char current_char = s1[i];
        int count_s1 = 0, count_s2 = 0;
        while (i < s1.size() && s1[i] == current_char) {
            i++;
            count_s1++;
        }
        while (j < s2.size() && s2[j] == current_char) {
            j++;
            count_s2++;
        }
        if (count_s2 < count_s1) {
            cout << "NO" << endl;
            return;
        }
    }
    if (i < s1.size() || j < s2.size()) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}


int main()
{
    IMRAN
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}