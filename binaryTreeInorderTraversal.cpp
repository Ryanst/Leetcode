#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//还是需要一个p指针，单独用漳
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> inorderTraversal(TreeNode *root) {
	vector<int> res;
	if(root == NULL) return res; 
	stack<TreeNode*> st;
	TreeNode *p = root;
	while(p != NULL || !st.empty())
	{
		while(p != NULL)
		{
			st.push(p);
			p = p->left;
		}
		while(!st.empty() && st.top()->right == NULL)
		{
			res.push_back(st.top()->val);
			st.pop();
		}
		if(!st.empty())
		{
			res.push_back(st.top()->val);
			p = st.top();
			st.pop();
			p = p->right;
		}
	}
	return res;
}

int main()
{
	TreeNode *t = new TreeNode(1);
	inorderTraversal(t);
}
