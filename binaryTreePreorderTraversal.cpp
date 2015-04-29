#include <iostream>
#include <vector>
#include <stack>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode *root) {
		vector<int> res;
		if(root == NULL) return res;
		stack<TreeNode*> st;
		TreeNode *p = root;

		while(p != NULL)
		{
			while(p != NULL)
			{
				res.push_back(p->val);
				st.push(p);
				p = p->left;
			}
			while(!st.empty() &&  st.top() ->right == NULL)
				st.pop();
			if(!st.empty())
			{
				p = st.top() ->right;
				st.pop();
			}
		}
		return res;
	}
};
