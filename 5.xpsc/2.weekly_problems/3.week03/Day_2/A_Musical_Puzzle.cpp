#include <bits/stdc++.h>
using namespace std;

void solve() {
    map<string, int> mp;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++) {
        string ss;
        ss += s[i];
        ss += s[i + 1];
        mp[ss]++;
    }
    cout << mp.size() << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
