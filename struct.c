/*
 * The scope of a tag starts right after its appearance. By this, we can use
 * the identifier (tag) within itself. That's how we are able to write a 
 * circular doubly linked list. The kernel structure `struct task_struct' is 
 * implemented in this way. 
 */
#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *previous;
	struct node *next;
};
/*
 * or 
struct node {
	int data;
	struct node *previous, *next;
};
*/
struct node *first_node = NULL;
struct node *last_node = NULL;
struct node *create_node(int data) ;
void free_list(struct node *start_node);
void print_list(void);

int main(void)
{
// data must be >= 0 for print
	create_node(1);
	create_node(2);
	create_node(3);
	create_node(4);
	create_node(5);
	print_list();
	
	free_list(first_node);
	return 0;
}

struct node *create_node(int data)
{
	struct node *pnode = (struct node *)malloc( sizeof(struct node) );
	if (pnode == NULL)
	{
		perror("failed to malloc() a node");
		exit(1);
	}
	if (first_node == NULL)
	{
		first_node = pnode;
		last_node = pnode;
		pnode->previous = NULL;
		pnode->next = NULL;
	}
	else
	{
		pnode->previous = last_node;
		pnode->next = first_node;
		first_node->previous = pnode;
		last_node->next = pnode;
		last_node = pnode;
	}
	pnode->data = data;
	return pnode;
}

void free_list(struct node *start_node)
{
	struct node *iterator = start_node->next;
	while ( iterator != start_node )
	{
		struct node *tmp = iterator->next;
		free(iterator);
		iterator = tmp;
	}
	free(start_node);
}

void print_list(void)
{
	struct node *p;
	if (first_node != NULL)
	{
		p = first_node;
		do
		{	
			printf("%d\t%d\t%d\n", 
			p->previous != NULL ? p->previous->data : -1, 
			p->data, 
			p->next != NULL ? p->next->data : -1 );

			if (p->next != NULL)
				p = p->next;
		}
		while (p != first_node);
	}
}
