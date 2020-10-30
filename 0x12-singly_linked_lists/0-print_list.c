#include "lists.h"

/**
 * print_list - returns number of elements in linked list
 *
 * @h: head of const list being counted
 * Return: returns number of elements in list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	int i;
	const list_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
