#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin>>x;
    set<int>st ;
    for(int i=0;i<x;i++){
        int n;
        cin>>n;
        st.insert(n);
    }
    cout<<*(st.rbegin())+*(++st.rbegin())<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}