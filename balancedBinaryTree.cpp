#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int max(int a,int b)
	{
		return a>b?a:b;
	}
	int depthofTree(TreeNode *p)
	{
		if(p == NULL)
			return 0;
		return max(depthofTree(p->left)+1,depthofTree(p->right)+1);
	}
    bool isBalanced(TreeNode *root) {
		if(root == NULL)
			return true;
		return (abs(depthofTree(root->left) - depthofTree(root->right)) <= 1) && isBalanced(root->left) && isBalanced(root->right);
	}
};
