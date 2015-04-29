#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
		ListNode* cur = head;

		if(cur == NULL || cur->next == NULL)
			return head;

		ListNode* q1,*q2;
		ListNode* pre = NULL;//这边如果不初始化为NULL的话在leetcode上会报runtime error，因为不初始化的话pre就是野指针

		head = cur -> next;

		while(cur != NULL && cur->next != NULL)
		{
			q1 = cur;
			q2 = cur->next;
			if(pre != NULL)
				pre->next = q2;
			q1->next = q2->next;
			q2->next = cur;
			cur = q1->next;
			pre = q1;
		}
		return head;
    }
};
