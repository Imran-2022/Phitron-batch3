#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *pre;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void printSimply(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void printReversely(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->pre;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(120);
    Node *b = new Node(103);
    Node *c = new Node(140);
    head->next = a;
    a->next = b;
    b->next = c;
    a->pre = head;
    b->pre = a;
    c->pre = b;
    Node *tail = c;

    printSimply(head);
    cout << endl;
    printReversely(tail);

    return 0;
}