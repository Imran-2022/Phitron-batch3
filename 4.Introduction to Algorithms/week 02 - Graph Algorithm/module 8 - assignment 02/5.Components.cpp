#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> adj[N];
vector<int> components;
bool visited[N];

int dfs(int u)
{
    stack<int> st;
    st.push(u);
    visited[u] = true;
    int s = 0;
    while (!st.empty())
    {
        int top = st.top();
        st.pop();
        s++;
        for (int v : adj[top])
        {
            if (!visited[v])
            {
                visited[v] = true;
                st.push(v);
            }
        }
    }
    return s;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < N; i++)
    {
        if (!visited[i])
        {
            int count = dfs(i);
            if (count > 1)
            {
                components.push_back(count);
            }
        }
    }

    sort(components.begin(), components.end());

    for (auto x : components)
    {
        cout << x << " ";
    }

    return 0;
}