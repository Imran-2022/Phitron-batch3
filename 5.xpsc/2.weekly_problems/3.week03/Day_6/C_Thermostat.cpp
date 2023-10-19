#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l,r,x;
    cin>>l>>r>>x;
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0"<<endl;
        return;
    }
    if(abs(b-a)>=x){
        cout<<"1"<<endl;
        return;
    }

  if(b>a){
      if(b+x<=r || a-x>=l){
        cout<<"2"<<endl;
        return;
        }
        else if(a+x<=r && b-l>=x){
            cout<<"3"<<endl;
            return;
        }else{
            cout<<"-1"<<endl;
            return;
        }
  }else{
        if(a+x<=r || b-x>=l){
            cout<<"2"<<endl;
            return;
        }else if(a-x>=l && r-b>=x){
            cout<<"3"<<endl;
            return ;
        }else{
            cout<<"-1"<<endl;
            return;
        }
  }
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}