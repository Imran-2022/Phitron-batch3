#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    int x;
    cin >> x;

    v.push_back(x);
    int current_idx = v.size() - 1;
    // cout<<current_idx<<endl;
    // int parent = (current_idx - 1) / 2;
    // cout<<parent<<endl;

    while (current_idx != 0)
    {
        int parent = (current_idx - 1) / 2;

        if (v[parent] < v[current_idx])
            swap(v[parent], v[current_idx]);
        else
            break;
        current_idx = parent;
    }

    for(int x:v)cout<<x<<" ";

    return 0;
}
