#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector<int> v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    int p;
    cin>>p;
    v.insert(v.begin() + p, v2.begin(), v2.end());

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}