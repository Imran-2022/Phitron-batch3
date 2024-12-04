#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    vector<int> v(26, 0);
    while (cin >> c)
    {
        v[c-'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (v[i - 'a'])
            cout<<i<<" : "<<v[i-'a']<<endl;
    }

    return 0;
}
