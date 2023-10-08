#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define newline cout<<endl;
#define e '\n'
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

bool check(int x){
    int a,b,c,d;
    a=x%10;x/=10;
    b=x%10;x/=10;
    c=x%10;x/=10;
    d=x%10;x/=10;
    if(a!=b && a!=c && a!=d && b!=c &&b!=d && c!=d)return true;
    else return false;
}

void solve(){
    int n;
    cin>>n;
    n++;
    while(!check(n)){
        n++;
    }
    cout<<n<<endl;
}


int main(){
    IMRAN
    int t = 1;
    // cin>>t;
    while(t--)solve();
    return 0;
}