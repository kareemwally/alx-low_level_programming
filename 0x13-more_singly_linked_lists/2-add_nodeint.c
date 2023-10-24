#include "lists.h"
/**
 *add_nodeint-function
 *description:that function adds node at the beginning of list
 *@n:the data to put in node
 *@head:the base address to the first node
 *return:(pointer)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *res = malloc(sizeof(listint_t));
if (res != NULL)
{
res->n = n;
res->next = *head;
*head = res;
return (*head);
}
else
return (NULL);
}
