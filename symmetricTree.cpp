#include <iostream>
using namespace std;

//镜像树
//已经AC
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:

	bool isSym(TreeNode *left,TreeNode *right)
	{
		if(!left && !right)
			return true;
		if(left == NULL ^ right == NULL)
			return false;
		if(left->val != right->val)
			return false;

		return isSym(left->left,right->right) && isSym(left->right,right->left);
	}

    bool isSymmetric(TreeNode *root) {
		if(!root) 
		   return true;
		return isSym(root->left,root->right);
    }
};
