#include <bits/stdc++.h>
using namespace std;

const int N=1e3+5;
vector<int>adj[N];
bool visited[N];
int level[N];

// bfs is not recursive . 

void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    stack<int> reverseOrder;
    while(!q.empty()){
        int u=q.front();
        q.pop();
         reverseOrder.push(u);
        for(int v:adj[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
            
        }

    }

    // print in reverse order - 

     while (!reverseOrder.empty()) {
        int u = reverseOrder.top();
        reverseOrder.pop();
        cout << u << " ";
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){

        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);

    return 0;
}

/*

input:
4 
4
1 2
3 4
1 3
2 4

output:
4 3 2 1 

*/