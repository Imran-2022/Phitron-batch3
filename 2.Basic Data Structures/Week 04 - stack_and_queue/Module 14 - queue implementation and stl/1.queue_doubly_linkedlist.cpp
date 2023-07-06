#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleetable = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleetable;
            return;
        }
        head->prev = NULL;
        delete deleetable;
    }
    int size()
    {
        return sz;
    }
    int front()
    {
        return head->val;
    }
    bool isEmpty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};

main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.isEmpty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}