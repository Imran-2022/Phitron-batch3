#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> vt[N];
bool v1[N], v2[N];
int d1[N], d2[N];

void dfs(int u, int step, bool v[], int d[]) {
    v[u] = true;
    d[u] = step;
    if (step == 0) return;
    for (auto x : vt[u]) {
        if (!v[x]) {
            dfs(x, step - 1, v, d);
        }
    }
}

int main() {
    int n, m; 
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
    int x, y, k;
    cin >> x >> y >> k;

    dfs(x, k, v1, d1);
    dfs(y, k, v2, d2);

    bool flag = false;
    for (int i = 0; i < n; i++) { 
        if (v1[i] && v2[i]) {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
