#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int x = s.find("Ratul");
    if (x != -1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}