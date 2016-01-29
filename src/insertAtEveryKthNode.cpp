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

struct node * insertAtEveryKthNode(struct node *head, int K) {
	if (K <= 0 || head == NULL)
		return NULL;
	struct node*temp = head;
	int i = 1;
	while (temp != NULL){
		if (i == K){
			struct node* new_Node = (struct node *)malloc(sizeof(struct node));
			new_Node->num = K;
			new_Node->next = temp->next;
			temp->next = new_Node;
			i = 0;
			temp = temp->next;
		}
		temp = temp->next;
		i++;
	}
	return head;

}
