#include <iostream>

struct TreeLinkNode {
 int val;
 TreeLinkNode *left, *right, *next;
 TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

void connect(TreeLinkNode* root)
{
	TreeLinkNode* pre = NULL;
	TreeLinkNode* cur = root;
	TreeLinkNode* head = NULL;
	while(cur != NULL)
	{
		while(cur != NULL)
		{
			if(cur->left != NULL)
			{
				if(head == NULL)
				{
					head = cur->left;
					pre = head;
				}
				else
				{
					pre->next = cur->left;
					pre = pre->next;
				}
			}
			if(cur->right != NULL)
			{
				if(head  == NULL)	
				{
					head = cur->right;
					pre = head;
				}
				else 
				{
					pre->next = cur->right;
					pre = pre->next;
				}
			}
			cur = cur->next;
		}
		cur = head;
		pre = NULL;
		head = NULL;
	}
}
