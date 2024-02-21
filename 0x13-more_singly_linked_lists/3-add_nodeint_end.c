#include "lists.h"
/**
 *add_nodeint_end-function
 *description:this function adds a node at the end
 *@n:the data to enter into the node
 *@head:pointer to the 1st node
 *Return:(pointer)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *res = malloc(sizeof(listint_t));
listint_t *tmp = *head;
if (res != NULL)
{
res->n = n;
res->next = NULL;
if (*head == NULL)
{
*head = res;
return (*head);
}
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = res;
tmp = res;
return (tmp);
}
else
return (NULL);
}
