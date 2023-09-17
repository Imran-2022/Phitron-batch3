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
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
            
        }
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

    int x;
    cin>>x;
    cout<<"level of "<<x<<" = "<<level[x]<<endl;

    return 0;
}

/*

input:

7 
6
1 2
2 4
2 5
1 3
3 6
1 7
7


output:

Level of 7 = 1

*/