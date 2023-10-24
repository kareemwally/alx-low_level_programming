#include "lists.h"
/**
 *listint_len - function
 *description:this function only tells the number of nodes
 *@h:the pointer to the next node
 *Return:(int)
 */
size_t listint_len(const listint_t *h)
{
size_t res = 0;
while (h != NULL)
{
res++;
h = h->next;
}
return (res);
}
/**
 *insert_nodeint_at_index-function
 *description:that function adds a node at some index
 *@head:the base address of list
 *@idx:the index we need to insert the data at
 *@n:the data to insert
 *Return:(pointer)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *res = NULL, *tmp = *head;
if (!listint_len(*head))
return (NULL);
else
{
while (idx != 1)
{
tmp = tmp->next;
idx--;
}
res->next = tmp->next;
res->n = n;
tmp->next = res;
}
return (res);
}
