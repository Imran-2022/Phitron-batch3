#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1,s2;
    while(!cin.eof()){
        cin>>s1>>s2;
        int size1=s1.size();
        int size2=s2.size();
        int cnt=0;
        int j=0;
        for(int i=0;i<size1;i++){
            if(s1[i]==s2[j]){
                j++;
            }
            if(j==size2)break;
        }
        if(j==size2)cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
    }
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}
