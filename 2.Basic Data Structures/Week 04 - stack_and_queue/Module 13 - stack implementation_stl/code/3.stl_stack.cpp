#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st;
    // without loop-----------
    /*
    st.push(10);
    st.push(20);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop(); // not work if null
    if (!st.empty())
    {
        cout << st.top() << endl;
    }
    */
    //    with loop----

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}