#include "lists.h"
/**
 * dlistint_len - function to get number of nodes
 * Description: simple function to count nodes
 * @h: constant pointer to head
 * Return: (int) number of nodes
 */
size_t dlistint_len(dlistint_t *h)
{
size_t res = 0;
dlistint_t *test = h;
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
 * get_dnodeint_at_index - finding node
 * Description: that function finds the node by index
 * @head: pointer to head node
 * @index: starting from zero to len - 1
 * Return: (dlistint_t) node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *tmp = head;
if ((int)index >= (int)dlistint_len(head) || head == NULL)
{
return (NULL);
}
while (index > 0)
{
tmp = tmp->next;
index--;
}
return (tmp);
}
