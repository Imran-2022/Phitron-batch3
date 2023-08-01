#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *pre;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insert(Node *&head, Node *&tail, string val)
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

void find(Node *&head, Node *&carryAddress, string q)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == q)
        {
            cout << tmp->val << endl;
            carryAddress = tmp;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}

void findP(Node*&carryAddress)
{
    if(carryAddress->pre!=NULL){
        cout<<carryAddress->pre->val<<endl;
        carryAddress=carryAddress->pre;
    }else{
        cout<<"Not Available"<<endl;
    }
}
void findN(Node*&carryAddress)
{
    if(carryAddress->next!=NULL){
        cout<<carryAddress->next->val<<endl;
        carryAddress=carryAddress->next;
    }else{
        cout<<"Not Available"<<endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *carryAddress = NULL;
    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        insert(head, tail, val);
    }
    int n;
    cin>>n;
    while (n--)
    {
        string query;
        cin >> query;
        if (query == "visit")
        {
            string visitS;
            cin >> visitS;
            find(head, carryAddress, visitS);
        }
        if (query == "prev")
        {
            findP(carryAddress);
        }
        if (query == "next")
        {
            findN(carryAddress);
        }
    }

    return 0;
}