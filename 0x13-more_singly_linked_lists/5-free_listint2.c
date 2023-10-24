#include "lists.h"
/**
 *free_listint2-function
 *description:that function deallocates the space of list
 *@head:base pointer to list
 *Return:(void)
 */
void free_listint2(listint_t **head)
{
listint_t *res, *tmp;
if (!head)
{
return;
}
res = *head;
while (res)
{
tmp = res;
res = res->next;
free(tmp);
}
*head = NULL;
}
