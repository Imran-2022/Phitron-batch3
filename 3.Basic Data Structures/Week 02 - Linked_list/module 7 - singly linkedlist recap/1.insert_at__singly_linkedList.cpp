#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
        int val;
        Node* next;
    Node(int  val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* head,int pos,int val){
    Node* newNode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}

void print_singly_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    int pos,val;
    cin>>pos>>val;
    insert_at_tail(head,pos,val);
    print_singly_linked_list(head);
    
    return 0;
}