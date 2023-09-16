#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int height[N];

void dfs(int u){

    visited[u]=true;

    for(int v: adj[u]){
        if(visited[v]==true) continue;
        // child is not visited Yet. 
        dfs(v);
        height[u]=max(height[u],height[v]+1);
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

    dfs(1);
    int x;
    cin>>x;
    cout<<"Depth of "<<x<<" : "<<height[x]<<endl;

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
1


output:

Depth of 1 : 2


*/