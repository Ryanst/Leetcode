#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    	if(head == NULL || head ->next == NULL)
    		return NULL;
    
    	ListNode *oneStep = head;		
    	ListNode *twoStep = oneStep->next;
    	while(twoStep != NULL && twoStep->next != NULL)
    	{
    		if(oneStep == twoStep->next)
    			return oneStep;
    		oneStep = oneStep->next;
    		twoStep = twoStep->next->next;
    	}
    	return NULL;
    }
};
