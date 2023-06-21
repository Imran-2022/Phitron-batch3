#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> val={1,2,3,4};
    cout<<val.size()<<endl;

    for(auto it = val.begin();it!=val.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    vector<int> abc={1,23};
    list<int>vctr(abc.begin(),abc.end());
    
    list<int> mylist(5,34);
    list<int> mylist2(mylist);
    cout<<mylist.size()<<endl;
    for(int val:vctr){
        cout<<val<< " ";
    }
    return 0;
}