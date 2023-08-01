#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v1(n);
    int i=0;
    while(n--){
        cin>>v1[i];
        i++;
    }

    for(auto i=v1.end()-1;i>=v1.begin();i--){
        cout<<*i<<" ";
    }
    
    return 0;
}