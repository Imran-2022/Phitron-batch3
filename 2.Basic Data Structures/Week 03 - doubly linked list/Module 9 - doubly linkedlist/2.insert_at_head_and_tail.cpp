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

void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    };
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->pre = newNode;
    newNode->pre = tmp;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if(head==NULL){
        head=newNode;
        // tail=newNode
        return;
    }
    newNode->next = head;
    newNode->next->pre = newNode;
    head = newNode;
}
void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
     if(tail==NULL){
        tail=newNode;
        // head=newNode
        return;
    }
    tail->next=newNode;
    newNode->pre=tail;
    tail=newNode;
}

int size(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    a->pre = head;
    b->pre = a;
    c->pre = b;
    Node *tail = c;
    int sz = size(head);
    int pos, val;
    cin >> pos >> val;
    if (pos > sz)
    {
        cout << "invalid" << endl;
    }
    else
    {
        if (pos == 0)
        {
            insert_at_head(head, val);
        }
        else if (pos == sz)
        {
            insert_at_tail(tail, val);
        }
        else
        {
            insert_at_any_position(head, pos, val);
        }
    }
    printSimply(head);
    cout << endl;
    printReversely(tail);

    return 0;
}