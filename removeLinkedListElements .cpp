#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* removeElements(ListNode* head, int val) {
	if(head == NULL)	return NULL;
	
	ListNode *cur = head;
	while(cur->next != NULL)
	{
		if(cur->next->val == val)
			cur->next = cur->next->next;
		else
			cur = cur->next;
	}
	if(head->val == val)	return head->next;
	
	return head;
}


