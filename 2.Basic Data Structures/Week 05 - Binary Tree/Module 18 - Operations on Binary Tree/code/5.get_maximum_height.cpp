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

int max_height(Node *root)
{
    if(root==NULL) return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}

int main()
{
    Node *root = input_tree();
    cout << max_height(root) << endl;
    return 0;
}