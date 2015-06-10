ListNode* reverseList(ListNode* head) {
	ListNode* pre = NULL;
	ListNode* cur = head;
	ListNode* curNext;
	while (cur != null) {
		curNext = cur->next;
		cur->next = pre;
		pre = cur;
		cur = curNext;
	}
	return pre;
}