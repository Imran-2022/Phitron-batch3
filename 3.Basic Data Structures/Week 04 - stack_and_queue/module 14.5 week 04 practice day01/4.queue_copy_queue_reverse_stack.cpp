#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    queue<int>q2;
    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    while (!q.empty())
    {
        int k=q.front();
        st.push(k);
        q.pop();
    }
    while (!st.empty())
    {
        int k=st.top();
        q2.push(k);
        st.pop();
    }
    while (!q2.empty())
    {
        int k=q2.front();
        cout<<k<<" ";
        q2.pop();
    }
    
    return 0;
}