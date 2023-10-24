#include "lists.h"
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
