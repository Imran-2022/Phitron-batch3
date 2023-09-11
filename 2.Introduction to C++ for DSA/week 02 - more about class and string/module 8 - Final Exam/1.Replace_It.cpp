#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s, ss;
        cin >> s;
        cin >> ss;
        while(s.find(ss)!=-1){
            s.replace(s.find(ss),ss.size(),"$");
        }
        cout <<s<< endl;
    }
    return 0;
}