#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


void print_list(struct node *input){
	printf("[ ");
	while(input != NULL){
		printf("%d ", input ->i);
		input= input->next;
	}
	printf("]\n\n");
}


struct node * insert_front(struct node *input, int x){
	struct node *new = malloc(sizeof(struct node));
	new-> i = x;
	new -> next = input;
	return new; 
}


struct node * free_list(struct node *input){
	printf("freeing list.\n");
	struct node *front = input -> next;
	while(front != NULL){
		printf("freeing node: %d\n", input -> i);
		// This print statement allows the user to see the
	// the process of the nodes being freed.
		free(input);
		input = front;
		front = front -> next;
	}
	printf("freeing node: %d\n\n", input -> i);
	// This print statement allows the user to see the
	// the process of the nodes being freed.
	free(input);
	free(front);
	return NULL;
}


struct node * remove_node(struct node *front, int data){
	if(front-> i == data){
	// When the value is at the front of the list
	   struct node *ahead = front -> next;
	   free(front);
	   return ahead;
	}
	struct node *current = front -> next;
	struct node *previous = front;
	while(current != NULL){
	// When the value is in the middle or at the end of the list
		if(current -> i == data){
		   previous-> next = current -> next;
		   free(current);
		   return front;
		}
		previous = current;
		current = current -> next;
	}
	return front;
}
