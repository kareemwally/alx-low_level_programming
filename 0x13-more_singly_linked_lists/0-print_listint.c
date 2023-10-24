#include "lists.h"
/**
 * print_listint -function
 *description:this function prints numbers in each node
 *@h:pointer to the 1st node
 *Return:(int)
 */
size_t print_listint(const listint_t *h)
{
size_t res = 0;
if (!h)
{
printf("\n");
}
while (h != NULL)
{
printf("%d\n", h->n);
res++;
h = h->next;
}
return (res);
}
