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

void insert(Node *&head, Node *&tail, int pass, int val)
{
    Node *newNode = new Node(val);

    if (tail == 0)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}
void print_linkedList_right_to_left(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->pre;
    }
}
void print_linkedList_left_to_right(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int count_nodes(Node *head)
{
    int count = 0;
    Node *current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
void insert_Any_pos(Node *head, int pos, int val)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int pass, val;
        cin >> pass >> val;
        Node *newv = new Node(val);
        if (head == NULL)
        {
            if (pass != 0)
            {
                cout << "Invalid" << endl;
                continue;
            }
            else
            {
                head = newv;
                tail = newv;
            }
        }
        else if (head != NULL && pass == 0)
        {
            head->pre = newv;
            newv->next = head;
            head = newv;
        }
        else if (count_nodes(head) > pass)
        {
            insert_Any_pos(head, pass, val);
        }
        else if (count_nodes(head) == pass)
        {
            insert(head, tail, pass, val);
        }
        else if (count_nodes(head) < pass)
        {
            cout << "Invalid" << endl;
            continue;
        }
        cout << "L "
             << "-> ";
        print_linkedList_left_to_right(head);
        cout << endl;
        cout << "R "
             << "-> ";
        print_linkedList_right_to_left(tail);
        cout << endl;
    }

    return 0;
}