/**
 * problem link : https://atcoder.jp/contests/abc072/tasks/abc072_b?lang=en
 * 
 * new to me : 
 * 
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ss;
    cin>>ss;
    string s;
    for(int i=0;i<ss.size();i++){
        int x=i+1;
        if(x%2!=0)s+=ss[i];
    }
    cout<<s<<endl;
    return 0;
}