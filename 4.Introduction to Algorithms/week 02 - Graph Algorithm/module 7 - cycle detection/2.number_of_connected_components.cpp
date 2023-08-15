#include <bits/stdc++.h>
using namespace std;

const int N=1e3+5;
vector<int>adj[N];
bool visited[N];


void dfs(int u){

    visited[u]=true;

    for(int v:adj[u]){
        if(visited[v]) continue;
        dfs(v);
    }

}


void bfs(int s){

    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(visited[v]) continue;
            q.push(v);
            visited[v]=true;
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
    int cc=0;
    for(int i=1;i<=n;i++){
        if(visited[i])continue;
        dfs(i);
        cc++;
    }

    cout<<"number of connected components : "<<cc<<endl;

    return 0;
}

/*

task to do - 

number of connected components : 3
component1 :
component2 :
component3 : 

*/

/*
input - 
7
5
1 2
1 3
2 3
2 4
5 6

output : - 
number of connected components : 3


input :

7
6
1 2
1 3
2 3
2 4
5 6
6 7

output - 

number of connected components : 2

*/