#include <iostream>
using namespace std;

//删除倒数第n个节点
//这道题确实是可以一遍走完的，靠两个指针，但是效果跟直接求一遍长度其实一样

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
		if(head == NULL)
			return head;
		int len = 0;
		ListNode *p = head;
		while(p != NULL)
		{
			len++;
			p = p->next;
		}
		if(len == n)
			return head->next;
		int nu = len - n - 1;
		ListNode* cur = head;

		while(nu--)  cur = cur->next;

		if(cur->next->next == NULL)
			cur->next = NULL;
		else
			cur->next = cur->next->next;

		return head;
    }
	//以下是依靠两个指针一遍走完的代码
	    ListNode *removeNthFromEnd2(ListNode *head, int n) {
        if (!head) {
            return NULL;
        }
        ListNode* p = head;
        int i = 0;
        while(i < n) {
             p = p->next;
             i++;
        }

        if (!p) {
            return head->next;
        }

        ListNode* q = head;
        while(p->next) {
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        return head;
    }
};
