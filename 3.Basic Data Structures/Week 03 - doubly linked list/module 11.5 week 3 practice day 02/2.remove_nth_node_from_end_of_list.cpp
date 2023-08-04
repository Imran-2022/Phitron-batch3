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
int getSize(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void remove_nth_element(Node*& head, int size, int pos) {
    if (head == nullptr)
        return;
    
    if (pos == 1 && head->next==nullptr||size-pos==0) {
        Node* deletable = head;
        head = head->next;
        delete deletable;
        return;
    }
    
    Node* current = head;
    for (int i = 1; i < size - pos; i++) {
        current = current->next;
    }
    
    Node* deletable = current->next;
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
    int size = getSize(head);
    int pos;
    cin >> pos;
    remove_nth_element(head, size, pos);
    print(head);
    return 0;
}