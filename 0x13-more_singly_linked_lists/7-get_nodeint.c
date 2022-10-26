#include "lists.h"
/**
 * get_nodeint_at_index - finds a given node in a listin_t list.
 * @head : pointer to the head of the listint_t list.
 * @index: index of the node to find (indices starting at 0).
 * Return: If the node does not exist - NULL
 *         otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t n;

for (n = 0; (n < index) && (head->next); n++)
head = head->next;

if (n < index)
return (NULL);

return (head);
}
