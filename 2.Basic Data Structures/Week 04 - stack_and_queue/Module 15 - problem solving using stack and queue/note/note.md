### (doc link for problem solving - )[https://docs.google.com/document/d/1TpFKWC7o_HPPyMJ8N1rXEHviINh6lk3BmH47JxN93EY/edit?usp=sharing]

## 1 . [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)

```
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                else
                {
                    if (c == ')' && st.top() == '(')
                    {
                        st.pop();
                    }
                    else if (c == '}' && st.top() == '{')
                    {
                        st.pop();
                    }
                    else if (c == ']' && st.top() == '[')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};

```
## 2 . [844. Backspace String Compare](https://leetcode.com/problems/backspace-string-compare/description/)

```
class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> s1, s2;
        for (char c : s)
        {
            if (c == '#')
            {
                if (!s1.empty())
                    s1.pop();
            }
            else
            {
                s1.push(c);
            }
        }
        for (char c : t)
        {
            if (c == '#')
            {
                if (!s2.empty())
                    s2.pop();
            }
            else
            {
                s2.push(c);
            }
        }
        return s1 == s2;
    }
};

```

## 6 . [Insert An Element At Its Bottom In A Given Stack](https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166)

```
#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &st, int x)
{
    // Write your code here.
    stack<int> newSt;
    while (!st.empty())
    {
        newSt.push(st.top());
        st.pop();
    }
    newSt.push(x);
    while (!newSt.empty())
    {
        st.push(newSt.top());
        newSt.pop();
    }
    return st;
}

```

## 5 . [Maximum Equal Stack Sum](https://www.codingninjas.com/studio/problems/maximum-equal-stack-sum_1062571)

```

#include <bits/stdc++.h>
int getSum(stack<int> s)
{
    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    return sum;
}
int maxSum(stack<int> &s1, stack<int> &s2, stack<int> &s3)
{
    // Write your code here
    int sum1 = getSum(s1);
    int sum2 = getSum(s2);
    int sum3 = getSum(s3);
    // cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    while (true)
    {
        if (sum1 == sum2 && sum2 == sum3)
            break;
        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= s1.top();
            s1.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= s2.top();
            s2.pop();
        }
        else
        {
            sum3 -= s3.top();
            s3.pop();
        }
    }
    return sum1;
}

```

## 4 . [Reversing a Queue](https://www.codingninjas.com/studio/problems/reversing-a-queue_982934)

```
#include <bits/stdc++.h>
queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    return q;
}

```

## 3 . [Reverse Stack Using Recursion](https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875)

```
void reverseStack(stack<int> &s)
{
    // Write your code here
    if (s.empty())
        return;
    int x = s.top();
    s.pop();
    reverseStack(s);
    // reverse hoye gse
    stack<int> cp;
    while (!s.empty())
    {
        cp.push(s.top());
        s.pop();
    }
    cp.push(x);
    while (!cp.empty())
    {
        s.push(cp.top());
        cp.pop();
    }
}

```


