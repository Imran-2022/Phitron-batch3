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
void level_order(Node *root, int level)
{
    queue<pair<Node *, int>> q;

    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }
    q.push({root, 0});
    bool valid = false;
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front().first;
        int currentLevel = q.front().second;
        q.pop();

        // 2.jabotiyo ja kj achee.
        if (currentLevel == level)
        {
            cout << f->val << " ";
            valid = true;
        }
        // tar children gula ana.

        if (f->left)
            q.push({f->left, currentLevel + 1});
        if (f->right)
            q.push({f->right, currentLevel + 1});
    }
    if (!valid)
        cout << "Invalid" << endl;
}
int main()
{
    Node *root = input_tree();
    int level;
    cin >> level;
    level_order(root, level);
    return 0;
}