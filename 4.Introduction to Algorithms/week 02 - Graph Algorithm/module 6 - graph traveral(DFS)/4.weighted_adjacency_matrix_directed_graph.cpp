#include <bits/stdc++.h>
using namespace std;
const int N= 1e3+5;
int adjmat[N][N];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjmat[u][v]=w;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


/**

input -

4
5
1 2 8
1 3 9
2 4 11
4 3 15
3 2 17

output -

0 8 9 0 
0 0 0 11 
0 17 0 0 
0 0 15 0 


*/