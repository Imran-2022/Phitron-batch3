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

void swaping(Node* head, int size, int pos) {
    int left = pos;
    int right =size-pos;
    Node *tmp1=head;
    for(int i=1;i<pos;i++){
        tmp1=tmp1->next;
    }
    // cout<<tmp1->val<<endl;

    Node *tmp2=head;

    for(int i=1;i<=size-pos;i++){
        tmp2=tmp2->next;
    }
    // cout<<tmp2->val<<endl;
    swap(tmp1->val,tmp2->val);

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
    swaping(head, size, pos);
    print(head);
    return 0;
}