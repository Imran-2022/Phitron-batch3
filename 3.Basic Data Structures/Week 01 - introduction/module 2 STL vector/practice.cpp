#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<int> vt = {1, 2, 33, 4, 5};
    vector<int>::iterator it;
    it=find(vt.begin(),vt.end(),3);
    cout<<*it<<endl;
    if(it==vt.end())cout<<"HI"<<endl;

    return 0;
}
