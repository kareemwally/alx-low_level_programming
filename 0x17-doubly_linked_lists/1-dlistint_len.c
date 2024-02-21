#include "lists.h"
/**
 * dlistint_len - function to get number of nodes
 * Description: simple function to count nodes
 * @h: constant pointer to head
 * Return: (int) number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t res = 0;
const dlistint_t *test = h;
if (h == NULL)
{
return (res);
}
while (test)
{
test = test->next;
res++;
}
return (res);
}
