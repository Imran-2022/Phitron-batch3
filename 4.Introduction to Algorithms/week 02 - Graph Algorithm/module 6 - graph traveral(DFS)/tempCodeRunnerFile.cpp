#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        if ((y - x) < (n - 1) || (n - 1) <= 0) {
            cout << "-1" << endl;
            continue;
        }

        vector<int> vt;
        vt.push_back(x);

        int remaining = n - 1;
        int diff = y - x;

        for (int i = 1; i < n - 1; i++) {
            int curr_diff = min(remaining, diff - 1);
            vt.push_back(vt[i - 1] + curr_diff);
            remaining -= curr_diff;
            diff -= curr_diff;
        }

        vt.push_back(y);

        for (int i = 0; i < vt.size(); i++) {
            cout << vt[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
