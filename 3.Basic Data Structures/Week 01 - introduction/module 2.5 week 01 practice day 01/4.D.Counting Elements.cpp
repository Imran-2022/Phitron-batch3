#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int count = 0;
    for (auto it = v.begin(); it < v.end(); it++)
    {
        auto f = find(it, v.end(), *it + 1);
        if (f != v.end())
            count++;
    }
    cout << count << endl;
    return 0;
}