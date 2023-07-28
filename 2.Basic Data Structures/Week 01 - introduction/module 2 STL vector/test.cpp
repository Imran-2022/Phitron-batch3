#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1{1,2,3,4,5,6};
    vector<int> v2(v1);
    for(auto x:v2)cout<<x<<" ";
    return 0;
}