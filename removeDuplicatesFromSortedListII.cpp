#include <iostream>
using namespace std;


//  Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *deleteDuplicates(ListNode *head) {
	while(head != NULL && head->next != NULL)
	{
		if(head->val == head->next->val)
		{
			head = head->next;
			while(head->val == head->next->val && head->next != NULL)
				head = head->next;
			head = head ->next;
		}
		else
			break;
	}

	if(head == NULL)
		return NULL;
	
	ListNode *p = head->next,*cur = head;
	while(p != NULL && p->next != NULL)
	{
		if(p->val == p->next->val)
		{
			p  = p->next;
			while(p->val == p->next->val && p->next != NULL)
				p = p->next;
			p = p->next;
		}
		else
		{
			cur->next = p;
			cur = p;
			p = p->next;
		} 
		cur->next = p;
	}
	return head;
}

int main()
{

}
