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

void insert(Node *&root, int x)
{
    if (root == 0)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}

int main()
{
    Node *root = input_tree();

    int x;
    cin >> x;
    insert(root, x);
    insert(root, 32);
    insert(root, 22);
    level_order(root);

    return 0;
}