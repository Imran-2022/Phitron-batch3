#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
    Node():val(0), next(nullptr) {}
};

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

void insert(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

Node *getModified(Node *head)
{
    Node *dummy = new Node();
    Node *tail = dummy;
    int s = 0;
    for (Node *cur = head->next; cur; cur = cur->next)
    {
        if (cur->val)
            s += cur->val;
        else
        {
            tail->next = new Node(s);
            tail = tail->next;
            s = 0;
        }
    }
    return dummy->next;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        insert(head, tail, x);
    }
    Node *modifiedHead = getModified(head);
    print(modifiedHead);

    return 0;
}