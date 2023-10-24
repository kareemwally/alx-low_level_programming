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
