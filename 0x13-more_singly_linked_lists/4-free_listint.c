#include "lists.h"
/**
 *free_listint-function
 *description:that function Deallocates memory spaces
 *@head:pointer to 1st noded
 *Return:(void)
 */
void free_listint(listint_t *head)
{
listint_t *res;
res = head;
while (res->next != NULL)
{
head = head->next;
free(res);
res = head;
}
free(res);
head = NULL;
}
