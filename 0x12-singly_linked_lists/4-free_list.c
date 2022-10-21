#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a linked list.
  * @head: The pointer to the linked list
  *
  * Return: No return
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
