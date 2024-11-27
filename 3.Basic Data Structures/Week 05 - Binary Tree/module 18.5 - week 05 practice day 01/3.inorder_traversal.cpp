// - [Inorder Traversal - Coding Ninjas](https://www.codingninjas.com/studio/problems/inorder-traversal_3839605)

/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void inor(TreeNode *root,vector<int>&ans){
    if(root==NULL)return;
    inor(root->left,ans);
    ans.push_back(root->data);
    inor(root->right,ans);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>ans;
    inor(root,ans);
    return ans;
}