# linkedlist_test
Work 3: Enlist your C skillz

This will be due Monday (10/28) morning.

Write a simple linked list program. You will need a define a node struct with the following data members:
  A piece of data (your choice)
  A pointer to the next node
Here's an example of what the struct could look like:
  struct node { int i; struct node *next; };
Create the following functions:
  void print_list(struct node *);
    Should take a pointer to a node struct and print out all of the data in the list
  struct node * insert_front(struct node *, int);
    Should take a pointer to the existing list and the data to be added, create a new node and put it at the beginning of the list.
    The second argument should match whatever data you contain in your nodes.
    Returns a pointer to the beginning of the list.
  struct node * free_list(struct node *);
    Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).  
  struct node * remove_node(struct node *front, int data);
    Remove the node containing data from the list pointed to by front.
    If data is not in the list, nothing is changed.
    Returns a pointer to the beginning of the list.
Your list functions should be in a .c/.h library, with a separate .c file used for testing.
