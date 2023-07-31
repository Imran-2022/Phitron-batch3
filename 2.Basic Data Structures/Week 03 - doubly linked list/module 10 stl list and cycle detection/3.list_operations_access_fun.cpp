#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> v = {1, 5, 3, 4, 5, 6, 4};
    v.remove(4);
    v.sort();
    v.unique();
    // v.reverse();
    v.sort(greater<int>());

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << v.back() << endl;
    cout << v.front() << endl;
    cout << *next(v.begin(), 3) << endl;
    return 0;
}