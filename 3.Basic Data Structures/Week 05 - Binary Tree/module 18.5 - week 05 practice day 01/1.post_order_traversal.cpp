// - [Postorder Traversal - Coding Ninjas](https://www.codingninjas.com/studio/problems/name_2035933)

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

void post(TreeNode *root,vector<int>&ans){
    if(root==NULL)return;
    post(root->left,ans);
    post(root->right,ans);
    ans.push_back(root->data);
}

vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int>ans;
    post(root,ans);
    return ans;
}