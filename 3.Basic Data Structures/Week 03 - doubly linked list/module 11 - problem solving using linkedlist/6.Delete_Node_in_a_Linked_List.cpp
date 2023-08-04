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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}
void delete_val(Node *head, int v)
{
    Node *current = head;
    while (current->next->val != v)
    {
        current = current->next;
    }

    // cout<<current->val<<endl;

    Node *deletable = current->next;
    current->next = current->next->next;
    delete deletable;
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
    print(head);
    cout << endl;
    int x;
    cin >> x;
    delete_val(head, x);
    print(head);
    return 0;
}