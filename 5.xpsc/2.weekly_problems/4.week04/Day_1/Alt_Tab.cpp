#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> vt(n);

    for (int i = 0; i < n; i++) {
        cin >> vt[i];
    }

    reverse(vt.begin(), vt.end());

    set<string> seen; 
    vector<string> uniqueStrings; 

    for (int i = 0; i < n; i++) {
        if (seen.find(vt[i]) == seen.end()) {
            seen.insert(vt[i]);
            uniqueStrings.push_back(vt[i]);
        }
    }

    for (const string &x : uniqueStrings) {
        if (x.size() >= 2) {
            cout << x[x.size() - 2] << x[x.size() - 1];
        }
    }
    cout << endl;
}

int main() {
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
