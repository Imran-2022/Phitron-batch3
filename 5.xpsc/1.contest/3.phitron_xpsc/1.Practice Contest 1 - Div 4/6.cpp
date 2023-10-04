#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string ss;
    cin >> ss;
    vector<string> st;
    string s;
    for (int i = 0; i < n; i++)
    {
        if (ss[i] == 'W')
        {
            if (s.length())
                st.push_back(s);
            s = "";
        }
        else
        {
            s += ss[i];
        }
    }

    if (s.length())
        st.push_back(s);

    if (st.size())
    {
        int cnt = 0;
        for (string x : st)
        {
            int ct1 = 0, ct2 = 0;
            for (int i = 0; i < x.size(); i++)
            {
                if (x[i] == 'R')
                    ct1 = 1;
                if (x[i] == 'B')
                    ct2 = 1;
            }
            if (ct1 == 1 && ct2 == 1)
            {
                cnt++;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        if (cnt == st.size())
            cout << "YES" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}