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

void insert_at_linked_list(Node *&head, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void print_linkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void delete_at_pos(Node* head,int pos){
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    Node*deletable=tmp->next;
    tmp->next=tmp->next->next;
    delete deletable;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_at_linked_list(head, v);
    }
    int pos;
    cin>>pos;
    print_linkedList(head);
    cout<<endl;
    delete_at_pos(head,pos);
    print_linkedList(head);
    return 0;
}