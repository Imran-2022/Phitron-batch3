#include <bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];

bool visited[N];

int depth[N];
int height[N];

void dfs(int u){

    visited[u]=true;

    for(int v: adj[u]){
        if(visited[v]==true) continue;

        // child is not visited Yet. 
        
        depth[v]=depth[u]+1;

        dfs(v);
        
        // now we can determine the height of u
        
        // if(height[v]+1>height[u]){
        //     height[u]=height[v]+1;
        // }

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
    
    for(int i=1;i<=n;i++){
        cout<<"depth of node "<< i <<":"<<depth[i]<<endl;
    }

    cout<<endl;

    for(int i=1;i<=n;i++){
        cout<<"height of node "<< i <<":"<<height[i]<<endl;
    }

    return 0;
}

/*
input: 

10
9
1 2
1 3
1 10
2 4
3 5
3 6
4 7
4 8
6 9

output - 

visiting node : 1
visiting node : 2
visiting node : 4
visiting node : 7
visiting node : 8
visiting node : 3
visiting node : 5
visiting node : 6
visiting node : 9
visiting node : 10

*/