//leetcode Add Two Numbers

#include <iostream>
using namespace std;

struct ListNode {
    int->val;
    ListNode *next;
    ListNode(int x) :->val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *head;
        int up10 = 0;
        if(l1 == NULL && l2 == NULL)
        {
        	return head;
        }
        else if(l1 != NULL && l2 != NULL)
        {
        	head = new ListNode((l1->val + l2->val) % 10);
        	up10 = (l1->val + l2->val) / 10;
        	l1 = l1->next;
        	l2 = l2->next;
        }
        else if(l1 != NULL && l2 == NULL)
        {
        	head = new ListNode((l1->val) % 10);
        	l1 = l1->next;
        }
		else if(l1 == NULL && l2 != NULL)
        {
        	head = new ListNode((l2->val) % 10);
        	l2 = l2->next;
        }

        ListNode *curr = head;
        while(l1 != NULL && l2 != NULL)
        {
            ListNode *tail = new ListNode((up10 + l1->val + l2->val) % 10);
        	up10 = (up10 + l1->val + l2->val) / 10;
        	curr->next = tail;
        	curr = tail;
        	l1 = l1->next;
        	l2 = l2->next;
        }
        while(l1 != NULL)
        {
            ListNode *tail = new ListNode((up10 + l1->val) % 10);
            up10 = (up10 + l1->val) /10;
        	curr->next = tail;
        	curr = tail;
        	l1 = l1->next;
        }
        while(l2 != NULL)
        {
            ListNode *tail = new ListNode((up10 + l2->val) % 10);
            up10 = (up10 + l2->val) /10;
        	curr->next = tail;
        	curr = tail;
        	l2 = l2->next;
        }
        if(up10 != 0)
        {
        	ListNode *tail = new ListNode(up10);
        	curr->next = tail;
        }
        return head;
    }
};





