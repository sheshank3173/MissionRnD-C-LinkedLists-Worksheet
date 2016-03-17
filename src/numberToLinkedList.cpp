/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
void reverse(int);
void Insert(int);
void print();
struct node {
	int num;
	struct node *next;
};
struct node* head;
struct node * numberToLinkedList(int N) {
	head = NULL;
	int x;
	if (N < 0)
	{
		N = -(N);
	}
	if (N == 0)
	{
		Insert(0);
	}
	reverse(N);
	while (N != 0)
	{
		x = N % 10;
		Insert(x);
		N = N / 10;
	}
	return head;
}
void reverse(int n)
{
	int last, rev = 0;
	if (n < 0)
	{
		n = -(n);
	}
	while (n != 0)
	{
		last = n % 10;
		rev = (rev*10) + last;
		n = n / 10;
	}
}
void Insert(int digit)
{
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->num = digit;
	temp->next = head;
	head = temp;
}