#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Timur";
    sort(name.begin(), name.end());

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        sort(s.begin(), s.end());

        cout << (s == name ? "YES" : "NO") << endl;
    }

    return 0;
}