#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1.bar kore ano
        Node *f = q.front();
        q.pop();
        // 2,jabotiyo ja kaj ache.
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        f->left = left;
        f->right = right;

        // 3. children gula ke push koro
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
void level_order(Node *root)
{
    queue<Node *> q;
    if (root == NULL)
    {
        cout << "tree nai" << endl;
        return;
    }
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();
        // 2.jabotiyo ja kj achee.
        cout << f->val << " ";
        // tar children gula ana.

        // if(f->left!=NULL) q.push(f->left);

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        // bool l=search(root->left,x);
        // if(l==true) return true;
        // else return false;
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

int main()
{
    Node *root = input_tree();
    level_order(root);
    cout<<endl;
    if (search(root, 26))
        cout << "yes,Found" << endl;
    else
        cout << "Node Not Found" << endl;
    return 0;
}

/*

input:

10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1

output:

10 5 15 2 6 12 16 3 
Node Not Found



*/