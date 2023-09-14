#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
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

            if (v[parent] > v[current_idx])
                swap(v[parent], v[current_idx]);
            else
                break;
            current_idx = parent;
        }
    }

    for (int x : v)
        cout << x << " ";

    return 0;
}


/*
input:

4
4 2 3 1

output:

1 2 3 4 

*/