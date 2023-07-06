#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    // all operation = O(1).
    // for n value = O(n)
    void push(int x)
    {
        v.push_back(x);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    st.push(10);
    st.push(10);
    st.pop();
    st.pop();
    st.push(23);

    cout << st.empty() << endl;
    cout << st.top() << endl;
    cout << st.size() << endl;

    return 0;
}