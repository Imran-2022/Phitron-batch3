#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    v.erase(v.begin() + 1);
    cout << v.size() << endl;
    return 0;
}