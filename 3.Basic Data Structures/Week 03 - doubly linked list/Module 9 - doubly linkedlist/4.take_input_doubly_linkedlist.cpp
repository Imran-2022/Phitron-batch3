// take duble linkedlist input -

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void insert_linkedList(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->right = newNode;
    newNode->left = tail;
    tail = newNode;
}

void print_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->right;
    }
}
void print_reverse(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->left;
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
        insert_linkedList(head, tail, x);
    }
    print_list(head);
    cout << endl;
    print_reverse(tail);
    return 0;
}