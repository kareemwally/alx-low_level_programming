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
 * delete_dnodeint_at_index - simple function
 * Description: that function to delete any node in list
 * @head: base pointer to head node
 * @index: starting from 0
 * Return: (int)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
if (*head == NULL || (int)index >= (int)dlistint_len(*head))
{
return (-1);
}
while (index > 0)
{
tmp = tmp->next;
index--;
}
if (tmp->next != NULL && tmp->prev != NULL)
{
tmp->next->prev = tmp->prev;
tmp->prev->next = tmp->next;
free(tmp);
}
else if (tmp == *head)
{
*head = (*head)->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(tmp);
}
else if (tmp->prev != NULL && tmp->next == NULL)
{
tmp->prev->next = NULL;
free(tmp);
}
return (1);
}
