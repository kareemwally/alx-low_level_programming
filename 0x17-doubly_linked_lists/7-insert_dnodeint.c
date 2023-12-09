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
/**
 * insert_dnodeint_at_index - insertion by index
 * Description: that function inserts any data by index
 * @h: base pointer to head node
 * @n: the data
 * @idx: the index at which data to be set
 * Return: (dlist_t) node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h;
dlistint_t *m = malloc(sizeof(dlistint_t));
if ((int)idx >= (int)dlistint_len(*h) || *h == NULL || m == NULL)
{
free(m);
return (NULL);
}
while (idx > 0)
{
tmp = tmp->next;
idx--;
}
if (tmp == NULL)
{
free(m);
return (NULL);
}
if (tmp == *h)
{
m->n = n;
m->next = *h;
m->prev = NULL;
(*h)->prev = m;
*h = m;
return (m);
}
if (tmp->next == NULL && tmp->prev != NULL)
{
m->n = n;
m->next = tmp;
m->prev = tmp->prev;
tmp->prev->next = m;
tmp->prev = m;
}
if (tmp->next != NULL && tmp->prev != NULL)
{
m->n = n;
m->prev = tmp->prev;
m->next = tmp;
tmp->prev->next = m;
tmp->prev = m;
}
return (m);
}
