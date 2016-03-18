/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if (K < 2 || head == NULL)
		return NULL;
	else
	{
		struct node* temp1;
		struct node* temp2;
		temp1 = head;
		temp2 = head->next;
		int c = 2;
		while (temp2 != NULL)
		{
			if (c == K)
			{
				temp1 -> next = temp2->next;
				temp1 = temp1->next;
				c = 2;
				if (temp2->next != NULL)
				{
					temp2 = temp2->next;
				}
			}
			else
			{
				c++;
				temp1 = temp2;
			}
			temp2 = temp2->next;
		}
		return head;
	}

}