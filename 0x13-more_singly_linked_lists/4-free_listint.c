#include "lists.h"
/**
 *free_listint-function
 *description:that function Deallocates memory spaces
 *@head:pointer to 1st noded
 *Return:(void)
 */
void free_listint(listint_t *head)
{
listint_t *res = malloc(sizeof(listint_t));
while (head != NULL)
{
res = head;
head = head->next;
free(res);
}
}
