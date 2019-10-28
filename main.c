#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

int main()
{
	srand(time(NULL));
	printf("Bryan Monge Serrano - Linked List Assignment \n\n");
	struct node *input = NULL;
	printf("printing empty list\n");
	print_list(input);
	// Make a list from 19 to 0
	printf("Adding No.s 0 to 19 to the list.\n");
	int y = 0;
	while(y < 20){
		input = insert_front(input, y);
		y++;
	}
	printf("printing list\n");
	print_list(input);
	y = 4;
	int chooser;
	while(y > 0){
		chooser = rand() % 20;
		printf("Removing %d:\n", chooser);
		input = remove_node(input, chooser);
		print_list(input);
		y--;
	}
	printf("Re-Removing %d:\n", chooser);
	input = remove_node(input, chooser);
	print_list(input);
	input = free_list(input);
	printf("printing list\n");
	print_list(input);
}

