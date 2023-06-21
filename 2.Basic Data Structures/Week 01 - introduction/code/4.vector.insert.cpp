#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2};
    vector<int> v2 = {2, 3, 4, 5};

    v.insert(v.begin() + 1, v2.begin(), v2.end());

    for (int x : v)
    {
        cout << x << " ";
    }

    // cout<<v.size()<<endl;

    return 0;
}