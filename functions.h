#ifndef LINKEDLIST_H
#define LINKEDLIST_H


struct node { int i; struct node *next; };
void print_list(struct node * input);
struct node * insert_front(struct node *input, int);
struct node * free_list(struct node *start);
struct node * remove_node(struct node *front, int data);
#endif
