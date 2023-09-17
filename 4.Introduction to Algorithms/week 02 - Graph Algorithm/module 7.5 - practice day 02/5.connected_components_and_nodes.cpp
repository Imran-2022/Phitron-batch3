#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
bool visited[N];

void dfs(int u, vector<int>& component) {
    stack<int> st;
    st.push(u);
    visited[u] = true;
    component.push_back(u);

    while (!st.empty()) {
        int top = st.top();
        st.pop();

        for (int v : adj[top]) {
            if (!visited[v]) {
                visited[v] = true;
                st.push(v);
                component.push_back(v);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int componentCount = 0;
    vector<vector<int>> components;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, component);
            components.push_back(component);
            componentCount++;
        }
    }

    cout << componentCount << endl;

    for (int i = 0; i < componentCount; i++) {
        cout << "Component " << i + 1 << " :";
        for (int j : components[i]) {
            cout << " " << j;
        }
        cout << endl;
    }

    return 0;
}


/*

input:

8
4
1 2
2 3
3 4
5 6


output:

4
Component 1 : 1 2 3 4
Component 2 : 5 6
Component 3 : 7
Component 4 : 8

*/