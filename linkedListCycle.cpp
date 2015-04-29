#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


bool hasCycle(ListNode *head) {
	if(head == NULL || head ->next == NULL)
		return false;

	ListNode *oneStep = head;		
	ListNode *twoStep = oneStep->next;
	while(twoStep != NULL && twoStep->next != NULL)
	{
		if(oneStep == twoStep->next)
			return true;
		oneStep = oneStep->next;
		twoStep = twoStep->next->next;
	}
	return false;
}

