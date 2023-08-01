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
    newNode->pre = tail;
    tail = newNode;
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void reverse(Node*head,Node*tail){
    Node *i=head;
    Node*j=tail;
    while(i!=j && i->next!=j){
        swap(i->val,j->val);
        i=i->next;
        j=j->pre;
    }
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
    reverse(head,tail);
    print(head);
    return 0;
}