#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    cout<<(regex_match(s,regex("[mM]+[eE]+[oO]+[wW]+"))?"YES":"NO")<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}