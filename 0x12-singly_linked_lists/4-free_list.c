#include "lists.h"

/**
 * free_list - frees a list_t linked list
 *
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *temp, *check;

	temp = head;
	while (head != NULL)
	{
		head = temp->next;
		free(temp->str);
		free(temp);
		temp = check;
	}
}
