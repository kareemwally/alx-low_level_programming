#include "lists.h"
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
