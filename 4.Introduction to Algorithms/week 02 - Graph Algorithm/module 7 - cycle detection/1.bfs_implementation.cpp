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
    // push that time visited . 
    visited[s]=true;
    level[s]=0;
    while(!q.empty()){
        // pop a node from the queue and insert 
        // unvisited neighbors of tht node.

        int u=q.front();
        q.pop();
        cout<<"visiting Node : "<<u<<endl;

        // section1:a node is being processed.

        for(int v:adj[u]){

            // section2:  child processing

            if(visited[v]) continue;
            q.push(v);

            // section3: child processing

            visited[v]=true;
            level[v]=level[u]+1;
            
        }

        // section 4: same as section 1 . 
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

    for(int i=1;i<=n;i++){
        cout<<"level of "<<i<<" : "<<level[i]<<endl;
    }

    return 0;
}


/**
input : -

12
11
1 2
1 3
1 10
2 4
2 5
3 9
5 6
5 7
7 8
10 11
10 12

output -

visiting Node : 1
visiting Node : 2
visiting Node : 3
visiting Node : 10
visiting Node : 4
visiting Node : 5
visiting Node : 9
visiting Node : 11
visiting Node : 12
visiting Node : 6
visiting Node : 7
visiting Node : 8
level of 1 : 0
level of 2 : 1
level of 3 : 1
level of 4 : 2
level of 5 : 2
level of 6 : 3
level of 7 : 3
level of 8 : 4
level of 9 : 2
level of 10 : 1
level of 11 : 2
level of 12 : 2

*/