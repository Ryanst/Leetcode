#include <iostream>
#include <queue>
using namespace std;

struct TreeLinkNode {
 int val;
 TreeLinkNode *left, *right, *next;
 TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

void connect(TreeLinkNode *root) {
	if(root == NULL) return;

	queue<TreeLinkNode*> qu;
	int levelNodeNum = 0;
	int tmp = 0;
	if(root->left != NULL)
	{
		qu.push(root->left);
		levelNodeNum++;
	}
	if(root->right != NULL)
	{
		qu.push(root->right);
		levelNodeNum++;
	}
	TreeLinkNode* p;
	while(!qu.empty())
	{
		for(int i = 1;i <= levelNodeNum;i++)
		{
			p = qu.front();
			if(p->left != NULL)
			{
				qu.push(p->left);
				tmp++;
			}
			if(p->right != NULL)
			{
				qu.push(p->right);
				tmp++;
			}
			qu.pop();
			if(i != levelNodeNum)	p->next = qu.front();
		}
		levelNodeNum = tmp;
		tmp = 0;
	}
}

int main()
{

}
