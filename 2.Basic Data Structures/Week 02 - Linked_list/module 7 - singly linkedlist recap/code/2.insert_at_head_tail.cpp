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
void add_to_Linked_list(Node* &head,int n){
    Node* newNode=new Node(n);
    Node* tmp=head;
    if(head==NULL){
        head=newNode;
        return;
    }
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print_linked_list(Node* head){
   Node*tmp=head;
   while(tmp!=NULL){
    cout<<tmp->val<<" ";
    tmp=tmp->next;
   }
}
void insert_at_head(Node *&head,int addH,int v){
    Node*newNode=new Node(v);

    if(addH==0){   
        newNode->next=head;
        head=newNode;
    }
}
int main()
{
    Node* head=NULL;
    while (true)
    {
        int n;
        cin>>n;
        if(n==-1) break;
        add_to_Linked_list(head,n);
    }
    int addH, v;
    cin>>addH>>v;
    insert_at_head(head,addH,v);
    print_linked_list(head);
    return 0;
}