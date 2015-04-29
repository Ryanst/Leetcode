#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
	if(l1 == NULL && l2 == NULL)
		return NULL;

	ListNode *head = new ListNode(0);
	ListNode *curl=head,*curl1=l1,*curl2=l2;
	while(curl1 != NULL && curl2 != NULL)
	{
		while(curl1 != NULL && curl2 != NULL && curl1->val <= curl2->val)
		{
			curl->next = curl1;
			curl1 = curl1->next;
			curl = curl->next;
		}
		while(curl1 != NULL && curl2 != NULL && curl2->val <= curl1->val)
		{
			curl->next = curl2;
			curl2 = curl2->next;
			curl = curl->next;
		}
	}
	if(curl1 != NULL)
		curl->next = curl1;
	else
		curl->next = curl2;
	return head->next;
}

int main()
{
	ListNode *l1 = new ListNode(1);
	ListNode *l2 = new ListNode(2);
	ListNode *l = mergeTwoLists(l1,l2);
	cout <<"hi";
l
