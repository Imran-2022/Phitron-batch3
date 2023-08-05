/**

#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int>st;
    st=myStack;
    stack<int>st2;
    while(!st.empty()){
        int k=st.top();
        st2.push(k);
        st.pop();
    }
    st2.push(x);
    while(!st2.empty()){
        int k=st2.top();
        st.push(k);
        st2.pop();
    }
    return st;
}

*/