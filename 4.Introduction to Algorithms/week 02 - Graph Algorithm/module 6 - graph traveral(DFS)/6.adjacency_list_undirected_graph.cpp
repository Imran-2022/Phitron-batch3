#include <bits/stdc++.h>
using namespace std;
const int N= 1e5+5;
vector<int>adj[N];


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

    for(int i=1;i<=n;i++){
        cout<<"List "<<i<<" : ";
        for(int x:adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
/*
input - 

4
5
1 2
1 3
2 4
4 3
3 2

output -

List 1 : 2 3 
List 2 : 1 4 3 
List 3 : 1 4 2 
List 4 : 2 3 



*/