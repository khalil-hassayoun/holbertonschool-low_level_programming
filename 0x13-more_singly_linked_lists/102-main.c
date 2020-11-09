#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;
	int n;

	head2 = NULL;
	n = free_listint_safe(&head2);
	printf("NULL n = %d\n", n);
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint_safe(head);
	n = free_listint_safe(&head2);
	printf("head2n = %d\n", n);
	n = free_listint_safe(&head);
	printf("headn = %d\n", n);
	printf("%p, %p\n", (void *)head2, (void *)head);
	head2 = NULL;
	add_nodeint(&head2, 0);
	n = free_listint_safe(&head2);
	printf("1 n = %d\n", n);
	return (0);
}