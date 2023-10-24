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
 *pop_listint-function
 *description:that function returns the first element
 *@head:the base address of the first node in list
 *Return:(int)
 */
int pop_listint(listint_t **head)
{
int res = 0;
listint_t *t = *head;
if (!listint_len(*head))
{
return (res);
}
else
{
res = t->n;
*head = t->next;
}
return (res);
}
