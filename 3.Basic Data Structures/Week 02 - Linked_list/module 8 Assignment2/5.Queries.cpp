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

void insert_in_linkedList(Node *&head, Node *&tail, int x, int y)
{
    Node *newNode = new Node(y);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        cout << head->val << " " << tail->val << endl;
        return;
    }
    if (x == 0)
    {
        head->next = newNode;
        head = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    cout << head->val << " " << tail->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        insert_in_linkedList(head, tail, x, y);
    }
    return 0;
}