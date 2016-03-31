/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) 
{	
	struct node *temp;
	int len=0,stop,i,res;
	temp = head;

	if (temp == NULL)
	{
		return -1;
	}
	else if (head == NULL)
	{
		return head->num;
	}
	else
	{

		while (temp != NULL)
		{
			temp = temp->next;
			len++;
		}

		if (len % 2 == 0)
		{
			stop = len / 2;
			temp = head;
			for (i = 1; i != stop; i++)
			{
				temp = temp->next;
			}

			res = ((temp->num) + ((temp->next)->num))/2;
			return res;

		}
		else
		{
			stop = (len / 2) + 1;
			temp = head;
			for (i = 1; i != stop; i++)
			{
				temp = temp->next;
			}

			res = (temp->num);
			return res;

		}
		

	}
}
