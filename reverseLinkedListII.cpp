#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//时间超限
ListNode *reverseBetween(ListNode *head, int m, int n)
{
	if(m == n)
		return head;
	ListNode *mp ,*np;
	ListNode * cur = head;
	n -= m;
	while(m > 2)
	{
		cur=cur->next;
		m--;
	}
	mp = cur;
	while(n > 2)
	{
		cur=cur->next;
		n--;
	}
	np = cur;
	
	ListNode *mpNext,*npNext;
	if(m == 1)
		mpNext = head;
	else
		mpNext = mp->next;

	npNext = np->next;

	if(m != 1)
		mp->next = npNext;
	ListNode *p = npNext->next;
	npNext->next = mpNext->next;
	np->next = mpNext;
	mpNext->next = p;

	if(m == 1)
		return npNext;

	return head;
}
