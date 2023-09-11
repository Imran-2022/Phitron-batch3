#include <bits/stdc++.h>
using namespace std;

string valid_S(string s)
{
    stack<char> st;
    for (char ch : s)
    {
        if (!st.empty() && ch != st.top())
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
    }
    if (st.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // cout << s << endl;
        cout << valid_S(s) << endl;
    }
    return 0;
}