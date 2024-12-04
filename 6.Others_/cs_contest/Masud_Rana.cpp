#include<bits/stdc++.h>
using namespace std;

const int N=2e3+10;
vector<int>adj[N];
int arr[N];
bool visited[N];

void dfs(int u,int parent){
    arr[u]=1;
    for(int v:adj[u]){
        if(v==parent)continue;
        dfs(v,u);
        arr[u]+=arr[v];
    }
}

int track =1;

void solve(){

    int n,k;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        adj[i].clear();
        visited[i]=false;
        arr[i]=0;
    }

    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(k, -1);

    int mx=INT_MIN;
    for(int v:adj[k])mx=max(mx,arr[v]);

    cout<<"Case"<<" " <<track++<<": "<<mx<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}