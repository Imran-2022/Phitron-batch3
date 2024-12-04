#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};

void insert(Node *&head,Node *&tail,int val){
    Node *newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void print(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}

void insert_at_pos(Node *&head,int pos,int val){
    Node *newNode=new Node(val);
    Node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

int main(){
    Node *head=NULL;
    Node *tail=NULL;
    int x;
    while(cin>>x){
        if(x==-1)break;
        insert(head,tail,x);
    }
    int pos,value;
    cin>>pos>>value;
    insert_at_pos(head,pos,value);
    print(head);

    return 0;
}

/*
input: 

1 2 3 4 5 6 -1
3
10

output:

1 2 10 3 4 5 6 


*/