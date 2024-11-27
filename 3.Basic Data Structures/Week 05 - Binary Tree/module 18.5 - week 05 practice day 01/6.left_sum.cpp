// - [Left Sum - Coding Ninjas](https://www.codingninjas.com/studio/problems/left-sum_920380)

#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/


long long leftSumHelper(BinaryTreeNode<int>* root, int isLeft){
	if(root == NULL)
	{
		return 0;
	}
	long long l = leftSumHelper(root->left, 1);
	long long r = leftSumHelper(root->right, 0);
	if(isLeft != 0)
	{
		return (l + r + long(root->data));
	}
	return (l + r);
}

long long leftSum(BinaryTreeNode<int> *root)
{
	return leftSumHelper(root,0);
}






