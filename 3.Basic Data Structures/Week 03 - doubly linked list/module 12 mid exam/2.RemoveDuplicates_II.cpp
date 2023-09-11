#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> val;
    int n;
    while (true)
    {
        cin >> n;
        if(n==-1) break;
        val.push_back(n);
    }
    val.sort();
    val.unique();
    for(int v:val){
        cout<<v<<" ";
    }
    return 0;
}
