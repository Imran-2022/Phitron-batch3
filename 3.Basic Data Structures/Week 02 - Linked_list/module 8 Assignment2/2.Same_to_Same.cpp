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

void insert_tail(Node *&head, Node *&tail, int val)
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

int print_linkedList(Node *head1, Node *head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    int flag = 1;
    int count1 = 0, count2 = 0;
    while (tmp1 != NULL)
    {
        count1 += 1;
        tmp1 = tmp1->next;
    }
    while (tmp2 != NULL)
    {
        count2 += 1;
        tmp2 = tmp2->next;
    }

    if (count1 != count2)
    {
        return 0;
    }
    tmp1 = head1;
    tmp2 = head2;
    while (tmp1 != NULL)
    {

        if (tmp1->val != tmp2->val)
        {
            return 0;
        }

        tmp2 = tmp2->next;
        tmp1 = tmp1->next;
    }
    return 1;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_tail(head1, tail1, val1);
    }
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_tail(head2, tail2, val2);
    }
    int f = print_linkedList(head1, head2);
    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}