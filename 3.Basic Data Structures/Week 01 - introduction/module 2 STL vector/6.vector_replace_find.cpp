#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> abc={1,2,3,4,34,3,253};
    // replace(abc.begin(),abc.end(),3,433);
    // for(int abcd:abc){
    //     cout<<abcd<<" ";
    // }
   
    auto it = find(abc.begin(),abc.end(),335);
    if(it==abc.end()) cout<<"not found"<<endl;
    else cout<<"found";
    return 0;
}