#include "lists.h"
/**
 * add_dnodeint - adding nodes as newhead
 * Description: adding new node in beginning of list
 * @head: base pointer to head pointer
 * @n: new element
 * Return: (dlistint_t) node of a
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_head  = malloc(sizeof(dlistint_t));
if (new_head == NULL)
{
return (NULL);
}
new_head->n = n;
new_head->next = *head;
new_head->prev = NULL;
(*head) = new_head;
return (new_head);
}
