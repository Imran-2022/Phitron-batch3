#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *pre;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->pre = NULL;
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
    newNode->pre = tail;
    tail = newNode;
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->pre;
    }
}
void insert_at_head(Node * &head, int val){
    Node * newNode=new Node(val);
    newNode->next=head;
    head->pre=newNode;
    head=newNode;
}

void insert_at_tail(Node * &tail,int val){
    Node * newNode=new Node(val);
    tail->next=newNode;
    newNode->pre=tail;
    tail=newNode;
}
void insert_any_pos(Node *head,int val,int pos){
    Node * newNode=new Node(val);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    tmp->next->pre=newNode;
    newNode->next=tmp->next;
    newNode->pre=tmp;
    tmp->next=newNode;
}

void delete_any_pos(Node*head,int pos){
    Node * tmp =head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    // deletable , 
    Node * deletable=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->next->pre=tmp;
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
    // insert at head - 
    int x;
    cin>>x;
    insert_at_head(head,x);

    // insert at tail - 
    int y;
    cin>>y;
    insert_at_tail(tail,y);

    //  insert at any position -

    int p,q;cin>>p>>q;
    insert_any_pos(head,p,q);
    
    // delete any pos;

    int pos;
    cin>>pos;
    delete_any_pos(head,pos);

    print(head);
    cout << endl;
    print_reverse(tail);

    return 0;
}

/*
input:

1 2 3 4 5 -1
100
200
1000 3
3

output:



*/