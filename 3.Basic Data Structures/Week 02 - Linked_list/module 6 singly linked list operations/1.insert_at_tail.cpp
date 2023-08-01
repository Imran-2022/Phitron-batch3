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

// void insert_at_tail(Node *head, int val)

// The insert_at_tail function won't work correctly because the function is modifying a local copy of the head pointer, which means the changes made inside the function won't be reflected outside the function. To fix this, you need to pass a pointer to a pointer or a reference to a pointer as a parameter, so that the changes made to the pointer inside the function are reflected outside the function.


void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout<<"entered value"<<endl;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhone last node e.
    tmp->next = newNode;
}

void print_linkedlist(Node *head)
{
    cout<<"your linked list"<<": ";
    Node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "option 1: insert at tail" << endl;
        cout << "option 2: print linked list" << endl;
        cout << "option 3: terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "please enter the value : " << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linkedlist(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}