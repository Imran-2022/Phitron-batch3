#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> st2;
    list<int> l1;
    list<int> l2;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        l1.push_back(st.top());
        // cout << st.top() << " ";
        st.pop();
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    while (!st2.empty())
    {
        l2.push_back(st2.front());
        // cout << st2.front() << " ";
        st2.pop();
    }

    bool equalV = equal(l1.begin(), l1.end(), l2.begin(), l2.end());
    if (equalV)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}