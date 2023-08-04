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

void remoove_duplicate(Node *head)
{
    if (head == NULL)
        return;
    while (head->next != NULL)
    {
        if (head->val == head->next->val)
        {
            head->next = head->next->next;
        }
        else if (head->val != head->next->val)
        {
            head = head->next;
        }
    }
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
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
    remoove_duplicate(head);
    print(head);
    return 0;
}