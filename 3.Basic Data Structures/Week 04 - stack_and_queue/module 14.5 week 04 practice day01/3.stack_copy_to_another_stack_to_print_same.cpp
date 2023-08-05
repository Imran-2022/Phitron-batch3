#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    stack<int> st2;
    while (!st.empty())
    {
        int k = st.top();
        st.pop();
        st2.push(k);
    }
    while (!st2.empty())
    {
        int k = st2.top();
        st2.pop();
        cout << k << " ";
    }

    return 0;
}