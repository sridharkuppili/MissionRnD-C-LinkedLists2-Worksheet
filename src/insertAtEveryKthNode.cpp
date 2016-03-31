/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K)
{
	int len = 0, i, reloop= -1,flag = 0;
	struct node *temp, *cur;
	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	
	if (K > len)
	{
		return head;
	}
	else
	{
		temp = head;
		while (temp != NULL)
		{
			flag++;
			
			if (flag == K)
			{
				flag = reloop;
				cur = (struct node*)malloc(sizeof(struct node));
				cur->num = K; 
				cur->next = temp->next;
				temp->next = cur;
				

			}
			temp = temp->next;

			
		}
		return head;
	}

	
}