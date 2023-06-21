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
    tail = newNode;
}

void sort(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    { // n-1
        for (Node *j = i->next; j != NULL; j = j->next)
        { // n
            if (i->val > j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp=tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        insert(head, tail, n);
    }
    sort(head);
    print(head);
    return 0;
}