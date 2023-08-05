#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    int y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n != y)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty())
    {
        int x = st.top();
        int y = q.front();
        if (x != y)
        {
            cout << "NO";
            return 0;
        }
        st.pop();
        q.pop();
    }

    cout << "YES" << endl;
    return 0;
}