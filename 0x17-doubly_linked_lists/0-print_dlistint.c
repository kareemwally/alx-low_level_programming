#include "lists.h"
/**
 * print_dlistint - simple printing function
 * Description: function for printing nodes
 * @h: pointer to head of list
 * Return: (int) number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t res = 0;
const dlistint_t *test = h;
if (h == NULL)
{
return (res);
}
while (test)
{
printf("%d\n", test->n);
test = test->next;
res++;
}
return (res);
}
