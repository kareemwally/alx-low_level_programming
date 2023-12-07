#include "lists.h"
/**
 * free_dlistint - simple function to free memory
 * Description: that function frees /deallocate memory
 * @head: pointer to head node
 * Return: (void)
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *next, *tmp = head;
while (tmp != NULL)
{
next = tmp->next;
free(tmp);
tmp = next;
}
head = NULL;
}
