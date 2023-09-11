#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            // insert-condition.....
            if (st.empty())
            {
                st.push(ch);
            }
            else
            {
                char chSt = st.top();
                if ((ch == 'R' && chSt == 'B') || (ch == 'B' && chSt == 'R'))
                {
                    st.pop();
                    st.push('P');
                }
                else if ((ch == 'R' && chSt == 'G') || (ch == 'G' && chSt == 'R'))
                {
                    st.pop();
                    st.push('Y');
                }
                else if ((ch == 'B' && chSt == 'G') || (ch == 'G' && chSt == 'B'))
                {
                    st.pop();
                    st.push('C');
                }
                else if ((ch == chSt))
                {
                    st.pop();
                }
                else
                {
                    st.push(ch);
                }
            }
        }
        stack<char> newSt;

        while (!st.empty())
        {
            char ch = st.top();
            if (!newSt.empty())
            {
                char cc = newSt.top();
                if (ch == cc)
                {
                    newSt.pop();
                }
                else
                {
                    newSt.push(ch);
                }
            }
            else
            {
                newSt.push(ch);
            }
            st.pop();
        }

        while (!newSt.empty())
        {
            cout << newSt.top();
            newSt.pop();
        }
        cout << endl;
    }
    return 0;
}