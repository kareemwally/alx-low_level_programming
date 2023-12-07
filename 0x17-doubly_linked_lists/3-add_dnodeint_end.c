#include "lists.h"
/**
 * add_dnodeint_end - simple function to add nodes
 * Description: adding nodes at the end of lists
 * @n: data to be added
 * @head: base pointer to head
 * Return: (dlistint_t) node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *last_one, *new_one  = malloc(sizeof(dlistint_t));
if (new_one == NULL)
{
return NULL;
}
new_one->n = n;
new_one->next = NULL;
if (*head == NULL)
{
new_one->prev = *head;
*head = new_one;
}
else
{
last_one = *head;
while (last_one->next != NULL)
{
last_one = last_one->next;
}
last_one->next = new_one;
new_one->prev = last_one;
}
return (new_one);
}
