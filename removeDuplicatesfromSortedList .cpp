#include <iostream>
using namespace std;

ListNode *deleteDuplicates(ListNode *head)
{
	if(head == NULL)
		return NULL;

	struct ListNode *curr = head;
	while(curr->next != NULL)
	{
		if(curr->val == curr->next->val)
		{
			struct ListNode *tem = curr->next;
			curr->next = tem->next;
			delete(tem);
		}
		else
		{
			curr = curr->next;
		}
	}
	return head;
}

int main()
{

}