/**
 * problem link : https://atcoder.jp/contests/abc193/tasks/abc193_a?lang=en
 * 
 * comment : : 
 * 
 * should learn percentage math later.
 * Discount Percentage = [(Regular Price - Sale Price) / Regular Price] * 100
 * 
 * 
*/

#include <bits/stdc++.h>
using namespace std;

void solve(){
    double x,y;cin>>x>>y;
    cout<<((x-y)/x)*100<<endl;
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--)solve();
    return 0;
}