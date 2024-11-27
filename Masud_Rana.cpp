#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fl(i, a, n) for (int i = a; i < n; i++)
#define pb push_back
#define all(p) p.begin(), p.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>

const int N = 2e5 + 10;
vector<int> adj[N];
int arr[N];
bool visited[N];

void dfs(int u, int parent) {
    arr[u] = 1;
    for (int v : adj[u]) {
        if (v == parent) continue;
        dfs(v, u);
        arr[u] += arr[v];
    }
}

int track = 1;

void start_here(){

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        visited[i] = false;
        arr[i] = 0;
    }
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(k, -1);
    int mx = 0;

    for (int v : adj[k])mx = max(mx, arr[v]);
    cout << "Case " << track++ << ": " << mx << endl;

}

int main()
{
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)start_here();
    return 0;
}
