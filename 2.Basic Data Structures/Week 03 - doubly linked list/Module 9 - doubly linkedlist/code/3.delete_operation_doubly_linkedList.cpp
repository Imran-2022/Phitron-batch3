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

void printSimply(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void printReversely(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->pre;
    }
}

void delete_node(Node* &head,Node* &tail,int pos){
    Node*deletableNode;
    if(pos==0){
        deletableNode=head;
        head=head->next;
        head->pre=NULL;
        return;
    }

    Node * tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    deletableNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->pre=tmp;
    delete deletableNode;

    // delete tail just like - 

    tmp=tail;
    deletableNode=tmp;
    tmp=tmp->pre;
    tmp->next=NULL;
    delete deletableNode;

}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    a->pre = head;
    b->pre = a;
    c->pre = b;
    Node *tail = c;
    int pos;
    cin >> pos;
    delete_node(head,tail,pos);
    printSimply(head); 
    cout << endl;
    printReversely(tail);

    return 0;
}