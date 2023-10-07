#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define nl cout<<endl;
#define endl '\n'
#define IMRAN ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;

bool isPrime(int x){
    for (int i = 2; i*i <= x ; ++i) {
        if(x % i == 0)
            return false;
    }
    return x > 1;
}

void solve(){
    int n,cnt=0;
    cin>>n;
    vector<int>v(3005,0);
    for (int i = 2; i <= n; ++i) {
        if(v[i]==0){
            for (int j = i; j <= n ; j+=i) {
                v[j]++;
            }
        }
       if(v[i]==2) cnt++; 
    }
    cout<<cnt<<endl;
}

int main(){
    IMRAN
    int t = 1;
    // cin>>t;
    while(t--)solve();
    return 0;    
}