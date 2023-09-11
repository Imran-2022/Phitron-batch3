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

void insert_tail(Node *&head, Node *&tail, int val)
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

void print_mid(Node *head)
{
    vector<int> arr;
    Node *tmp = head;
    while (tmp != NULL)
    {
        arr.push_back(tmp->val);
        tmp = tmp->next;
    }
    sort(arr.begin(),arr.end());
    if (arr.size() % 2 == 0)
    {
        cout << arr[arr.size() / 2] << " " << arr[arr.size() / 2 - 1] << endl;
    }
    else
    {
        cout << arr[arr.size() / 2] << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    print_mid(head);
    return 0;
}