#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(5,5);
    cout<<v.capacity()<<endl;
    v.resize(3);
    v.resize(5,45);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    return 0;
}